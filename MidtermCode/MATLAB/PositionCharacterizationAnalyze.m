% Forward direction data
desired_pos = desPos1(1:end)/16383*360;
actual_pos = absPos1(1:end)/16383*360;
d = pwm1(1:end)/9600*100;
dmax = -101*ones(1,size(desired_pos,2));
dmin = 101*ones(1,size(desired_pos,2));


% figure; plot(actual_pos, d);


for i = 1:size(desired_pos,2)
    for j = 1:size(actual_pos,2)
        if (desired_pos(i) == actual_pos(j))
            if (d(j) > dmax(i))
                dmax(i) = d(j);
            elseif (d(j) < dmax(i))
                dmin(i) = d(j);
            end
            
        end
        
    end
end



% 
% 
% d = cumsum(ones(1,size(d,2)))*eps + d; % handle repeat values
% [actual_pos,index] = unique(actual_pos);
% dspecial = interp1(actual_pos, d(index), desired_pos);

%interpft





% for i = 1:size(desired_pos,2)
%     for j = 1:size(actual_pos,2)
%         if (desired_pos(i) > actual_pos(i+1) && desired_pos(i) < actual_pos(i))
%             something = interp1(actual_pos, d, desired_pos); 
%         elseif (desired_pos(i) < actual_pos(i+1) && desired_pos(i) > actual_pos(i))
%             
%         end
%         
%         
%     end
% end
