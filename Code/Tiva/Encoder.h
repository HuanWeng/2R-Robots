/**
 * @file Encoder.h
 * @brief Encoder header
 *
 * This file contains the encoder functions
 *
 * @author Benjamen Lim
 * @author Huan Weng
 * @author Blake Strebel
 *
 */

#ifndef ENCODER_H_
#define ENCODER_H_

/**
 * @brief Initializes the SPI channels for the motor drivers, encoders, and RAM.
 *
 * Initializes SSI1 ~ 4 and their corresponding GPIO pins
 *
 * @param Void
 * @return Void
 */
extern void encoderSPIInit(void);

/**
 * @brief Updates value in sensor array
 *
 * This function sends a 't' and 40 pulses via SPI to the encoder and reads out the encoder's reply to
 * the encoderVal array
 *
 * @param Void
 * @return Void
 *
 */
extern void encoderRead(void);

/**
 * @brief Reads value of motor 1 encoders and sets the relative angle to zero
 *
 * @param Void
 * @return Void
 *
 */
extern void zeroMotor1RawRelative(void);

/**
 * @brief Reads value of motor 2 encoders and sets the relative angle to zero
 *
 * @param Void
 * @return The angle as a float
 *
 */
extern void zeroMotor2RawRelative (void);


/**
 * @brief Reads value in encoderVal array for motor 1 and converts it to an angle
 *
 * @param Void
 * @return The angle as a float
 *
 */
extern float readMotor1Angle(void);

/**
 * @brief Reads value in encoderVal array for motor 2 and converts it to an angle
 *
 * @param Void
 * @return The angle as a float
 *
 */
extern float readMotor2Angle(void);

/**
 * @brief Reads value in encoderVal array for motor 1
 *
 * The range for the read angle is 0 to 16383
 *
 * @param Void
 * @return The angle as an int
 *
 */
extern int readMotor1Raw(void);

/**
 * @brief Reads value in encoderVal array for motor 2
 *
 * The range for the read angle is 0 to 16383
 *
 * @param Void
 * @return The angle as an int
 *
 */
extern int readMotor2Raw(void);

/**
 * @brief Reads value in encoderVal array for motor 1 and keeps track of multiturn counts
 *
 * This function reads out the angle and keeps track of it for multiple turns. The value
 * ranges from -2,147,483,648 to 2,147,483,648. Each turn is 16383 counts
 *
 * @param Void
 * @return The counts as an int
 *
 */
extern int readMotor1RawRelative(void);

/**
 * @brief Reads value in encoderVal array for motor 2 and keeps track of multiturn counts
 *
 * This function reads out the angle and keeps track of it for multiple turns. The value
 * ranges from -2,147,483,648 to 2,147,483,648
 *
 * @param Void
 * @return The counts as an int
 *
 */
extern int readMotor2RawRelative(void);

/**
 * @brief Reads value in encoderVal array for motor 1 and keeps track of multiturn angles
 *
 * This function reads out the angle and keeps track of it for multiple turns.
 *
 * @param Void
 * @return The angle as an int
 *
 */
extern float readMotor1AngleRelative(void);

/**
 * @brief Reads value in encoderVal array for motor 2 and keeps track of multiturn angles
 *
 * This function reads out the angle and keeps track of it for multiple turns.
 *
 * @param Void
 * @return The angle as an int
 *
 */
extern float readMotor2AngleRelative(void);

/**
 * @brief Reads the motor 1's speed in terms of revolutions/sec from the encoder
 *
 * @param Void
 * @return float the speed of the motor in rev/s
 */
extern float readMotor2Speed(void);

/**
 * @brief Reads the motor 2's speed in terms of revolutions/sec from the encoder
 *
 * @param Void
 * @return float the speed of the motor in rev/s
 */
extern float readMotor1Speed(void);




#endif /* ENCODER_H_ */
