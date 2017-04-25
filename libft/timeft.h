/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timeft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 11:02:09 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/22 20:42:09 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Handy macros that are independent of tzfile implementation.
**	years before a Gregorian repeat = 400
**	NOT USED IN LIBFT
*/

#ifndef TIMEFT_H
# define TIMEFT_H

# define YEARSPERREPEAT		400

# define SECSPERMIN			60
# define MINSPERHOUR		60
# define HOURSPERDAY		24
# define DAYSPERWEEK		7
# define DAYSPERNYEAR		365
# define DAYSPERLYEAR		366
# define SECSPERHOUR		(SECSPERMIN * MINSPERHOUR)
# define SECSPERDAY			((int_fast32_t) SECSPERHOUR * HOURSPERDAY)
# define MONSPERYEAR		12

# define TM_SUNDAY			0
# define TM_MONDAY			1
# define TM_TUESDAY			2
# define TM_WEDNESDAY		3
# define TM_THURSDAY		4
# define TM_FRIDAY			5
# define TM_SATURDAY		6

# define TM_JANUARY			0
# define TM_FEBRUARY		1
# define TM_MARCH			2
# define TM_APRIL			3
# define TM_MAY				4
# define TM_JUNE			5
# define TM_JULY			6
# define TM_AUGUST			7
# define TM_SEPTEMBER		8
# define TM_OCTOBER			9
# define TM_NOVEMBER		10
# define TM_DECEMBER		11

# define TM_YEAR_BASE		1900

# define EPOCH_YEAR			1970
# define EPOCH_WDAY			TM_THURSDAY

#endif
