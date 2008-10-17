/* source: xio-unix.h */
/* Copyright Gerhard Rieger 2001-2007 */
/* Published under the GNU General Public License V.2, see file COPYING */

#ifndef __xio_unix_h_included
#define __xio_unix_h_included 1

extern const union xioaddr_desc *xioaddrs_unix_connect[];
extern const union xioaddr_desc *xioaddrs_unix_listen[];
extern const union xioaddr_desc *xioaddrs_unix_sendto[];
extern const union xioaddr_desc *xioaddrs_unix_recvfrom[];
extern const union xioaddr_desc *xioaddrs_unix_recv[];
extern const union xioaddr_desc *xioaddrs_unix_client[];
extern const union xioaddr_desc *xioaddrs_abstract_connect[];
extern const union xioaddr_desc *xioaddrs_abstract_listen[];
extern const union xioaddr_desc *xioaddrs_abstract_sendto[];
extern const union xioaddr_desc *xioaddrs_abstract_recvfrom[];
extern const union xioaddr_desc *xioaddrs_abstract_recv[];
extern const union xioaddr_desc *xioaddrs_abstract_client[];

extern const struct optdesc opt_unix_tightsocklen;

extern socklen_t
xiosetunix(struct sockaddr_un *saun,
	   const char *path,
	   bool abstract,
	   bool tight);

#endif /* !defined(__xio_unix_h_included) */
