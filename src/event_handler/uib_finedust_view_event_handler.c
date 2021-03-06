/*******************************************************************************
* This file was generated by UI Builder.
* User should hand edit this file.
********************************************************************************/

#include "app_main.h"
#include "view_data.h"
#include "uib_app_manager.h"
#include "uib_views.h"
#include "uib_views_inc.h"

typedef struct _uib_finedust_view_control_context {
	/* add your variables here */

} uib_finedust_view_control_context;

/**
 * @brief the user clicked the button (press/release).
 *
 * @param vc It is context of the view that this event occurred on. It has all of UI components that this view consist of.
 * @param obj It is UI component itself that emits the event signal.
 * @param event_info
 * 		event_info is NULL
 *
 */

void finedust_view_fdv_next_button_onclicked(uib_finedust_view_view_context *vc, Evas_Object *obj, void *event_info) {
	//Invoked at the start of wrapper function finedust_view_connection_finedust_view_fdv_next_button_onclicked

}

void finedust_view_fdv_next_button_onclicked_post(void* param, uib_finedust_view_view_context *vc, Evas_Object *obj, void *event_info) {
	//Invoked post wrapper function finedust_view_connection_finedust_view_fdv_next_button_onclicked

}
/**
 * @brief the user clicked the button (press/release).
 *
 * @param vc It is context of the view that this event occurred on. It has all of UI components that this view consist of.
 * @param obj It is UI component itself that emits the event signal.
 * @param event_info
 * 		event_info is NULL
 *
 */

void finedust_view_fdv_previous_button_onclicked(uib_finedust_view_view_context *vc, Evas_Object *obj, void *event_info) {
	//Invoked at the start of wrapper function finedust_view_connection_finedust_view_fdv_previous_button_onclicked

}

void finedust_view_fdv_previous_button_onclicked_post(void* param, uib_finedust_view_view_context *vc, Evas_Object *obj, void *event_info) {
	//Invoked post wrapper function finedust_view_connection_finedust_view_fdv_previous_button_onclicked

}
/**
 * @brief the user clicked the button (press/release).
 *
 * @param vc It is context of the view that this event occurred on. It has all of UI components that this view consist of.
 * @param obj It is UI component itself that emits the event signal.
 * @param event_info
 * 		event_info is NULL
 *
 */
void finedust_view_fdg_outdoor_button_onclicked(uib_finedust_view_view_context *vc, Evas_Object *obj, void *event_info) {
	evas_object_show(vc->fdg_outdoor_box);
	evas_object_hide(vc->fdg_indoor_box);
	evas_object_hide(vc->fdg_icon_box);
}

/**
 * @brief the user clicked the button (press/release).
 *
 * @param vc It is context of the view that this event occurred on. It has all of UI components that this view consist of.
 * @param obj It is UI component itself that emits the event signal.
 * @param event_info
 * 		event_info is NULL
 *
 */
void finedust_view_fdg_indoor_button_onclicked(uib_finedust_view_view_context *vc, Evas_Object *obj, void *event_info) {
	evas_object_show(vc->fdg_indoor_box);
	evas_object_hide(vc->fdg_outdoor_box);
	evas_object_hide(vc->fdg_icon_box);
}

/**
 * @brief the user clicked the button (press/release).
 *
 * @param vc It is context of the view that this event occurred on. It has all of UI components that this view consist of.
 * @param obj It is UI component itself that emits the event signal.
 * @param event_info
 * 		event_info is NULL
 *
 */
void finedust_view_fdg_icon_button_onclicked(uib_finedust_view_view_context *vc, Evas_Object *obj, void *event_info) {
	evas_object_show(vc->fdg_icon_box);
	evas_object_hide(vc->fdg_indoor_box);
	evas_object_hide(vc->fdg_outdoor_box);
}

