/*
 * gaim
 *
 * Gaim is the legal property of its developers, whose names are too numerous
 * to list here.  Please refer to the COPYRIGHT file distributed with this
 * source distribution.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include "prpl.h"

#include "yahoo_friend.h"

YahooFriend *yahoo_friend_new(void)
{
	YahooFriend *ret;

	ret = g_new0(YahooFriend, 1);
	ret->status = YAHOO_STATUS_OFFLINE;

	return ret;
}

void yahoo_friend_free(gpointer p)
{
	YahooFriend *f = p;
	if (f->msg)
		g_free(f->msg);
	if (f->game)
		g_free(f->game);
	g_free(f);
}
