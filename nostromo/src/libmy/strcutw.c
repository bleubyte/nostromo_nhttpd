/*
 * Copyright (c) 2004, 2005 Marcus Glocker <marcus@nazgul.ch>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/* strcutw()
 *	cuts a specific word in a string separated by spaces
 * Return:
 *	0 = success, -1 = failed
 *
 */

int
strcutw(char *dst, const char *src, const int word, const int dsize)
{
	int	i, j;

	for (i = 0, j = 1; j != word; i++) {
		if (src[i] == ' ')
			j++;
		/* word not found */
		if (src[i] == '\0')
			return -1;
	}

	for (j = 0; src[i] != ' ' && src[i] != '\0' && j != dsize - 1; i++, j++)
		dst[j] = src[i];

	/* terminate string */
	dst[j] = '\0';

	return 0;
}
