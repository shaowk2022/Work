

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from listeners.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef listenersPlugin_615587429_h
#define listenersPlugin_615587429_h

#include "listeners.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define listenersPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define listenersPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define listenersPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define listenersPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define listenersPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern listeners*
listenersPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern listeners*
listenersPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern listeners*
listenersPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
listenersPluginSupport_copy_data(
    listeners *out,
    const listeners *in);

NDDSUSERDllExport extern void 
listenersPluginSupport_destroy_data_w_params(
    listeners *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
listenersPluginSupport_destroy_data_ex(
    listeners *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
listenersPluginSupport_destroy_data(
    listeners *sample);

NDDSUSERDllExport extern void 
listenersPluginSupport_print_data(
    const listeners *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
listenersPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
listenersPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
listenersPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
listenersPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
listenersPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    listeners *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
listenersPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    listeners *out,
    const listeners *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
listenersPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const listeners *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
listenersPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    listeners **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
listenersPlugin_deserialize_from_cdr_buffer(
    listeners *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
listenersPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
listenersPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
listenersPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
listenersPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
listenersPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    listeners ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
listenersPlugin_new(void);

NDDSUSERDllExport extern void
listenersPlugin_delete(struct PRESTypePlugin *);

#define msgPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define msgPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define msgPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define msgPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define msgPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern msg*
msgPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern msg*
msgPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern msg*
msgPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
msgPluginSupport_copy_data(
    msg *out,
    const msg *in);

NDDSUSERDllExport extern void 
msgPluginSupport_destroy_data_w_params(
    msg *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
msgPluginSupport_destroy_data_ex(
    msg *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
msgPluginSupport_destroy_data(
    msg *sample);

NDDSUSERDllExport extern void 
msgPluginSupport_print_data(
    const msg *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
msgPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
msgPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
msgPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
msgPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
msgPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    msg *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
msgPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    msg *out,
    const msg *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
msgPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const msg *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
msgPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    msg **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
msgPlugin_deserialize_from_cdr_buffer(
    msg *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
msgPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
msgPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
msgPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
msgPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
msgPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    msg ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
msgPlugin_new(void);

NDDSUSERDllExport extern void
msgPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* listenersPlugin_615587429_h */

