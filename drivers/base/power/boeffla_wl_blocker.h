/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

#define LIST_WL_DEFAULT		"wlan_wake;wlan_rx_wake;wlan_ctrl_wake;wlan_txfl_wake;bluetooth_timer;BT_bt_wake;BT_host_wake;bbd_wake_lock;ssp_sensorhub_wake_lock;14860000.decon_f;ssp_wake_lock;ssp_comm_wake_lock;abox;umts_ipc0;umts_ipc1;mmc0_detect;grip_wake_lock;wlan_scan_wake;wlan_pm_wake;nfc_wake_lock"

#define LENGTH_LIST_WL				255
#define LENGTH_LIST_WL_DEFAULT		(sizeof(LIST_WL_DEFAULT))
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
