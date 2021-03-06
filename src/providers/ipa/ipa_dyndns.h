/*
    SSSD

    ipa_dyndns.h

    Authors:
        Stephen Gallagher <sgallagh@redhat.com>

    Copyright (C) 2010 Red Hat

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef IPA_DYNDNS_H_
#define IPA_DYNDNS_H_

void ipa_dyndns_update(void *pvt);
void ipa_dyndns_timer(void *pvt);

errno_t ipa_dyndns_init(struct be_ctx *be_ctx,
                        struct ipa_options *ctx);

void ipa_dyndns_update(void *pvt);


#endif /* IPA_DYNDNS_H_ */
