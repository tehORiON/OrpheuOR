
#include <structData.h>
#include <eiface.h>

class enginefuncsStructData : public StructData<enginefuncs_t>
{
	public:

		enginefuncsStructData()
		{
			addMember("pfnPrecacheModel",&structure->pfnPrecacheModel,Types[TypeLong]);
			addMember("pfnPrecacheSound",&structure->pfnPrecacheSound,Types[TypeLong]);
			addMember("pfnSetModel",&structure->pfnSetModel,Types[TypeLong]);
			addMember("pfnModelIndex",&structure->pfnModelIndex,Types[TypeLong]);
			addMember("pfnModelFrames",&structure->pfnModelFrames,Types[TypeLong]);
			addMember("pfnSetSize",&structure->pfnSetSize,Types[TypeLong]);
			addMember("pfnChangeLevel",&structure->pfnChangeLevel,Types[TypeLong]);
			addMember("pfnGetSpawnParms",&structure->pfnGetSpawnParms,Types[TypeLong]);
			addMember("pfnSaveSpawnParms",&structure->pfnSaveSpawnParms,Types[TypeLong]);
			addMember("pfnVecToYaw",&structure->pfnVecToYaw,Types[TypeLong]);
			addMember("pfnVecToAngles",&structure->pfnVecToAngles,Types[TypeLong]);
			addMember("pfnMoveToOrigin",&structure->pfnMoveToOrigin,Types[TypeLong]);
			addMember("pfnChangeYaw",&structure->pfnChangeYaw,Types[TypeLong]);
			addMember("pfnChangePitch",&structure->pfnChangePitch,Types[TypeLong]);
			addMember("pfnFindEntityByString",&structure->pfnFindEntityByString,Types[TypeLong]);
			addMember("pfnGetEntityIllum",&structure->pfnGetEntityIllum,Types[TypeLong]);
			addMember("pfnFindEntityInSphere",&structure->pfnFindEntityInSphere,Types[TypeLong]);
			addMember("pfnFindClientInPVS",&structure->pfnFindClientInPVS,Types[TypeLong]);
			addMember("pfnEntitiesInPVS",&structure->pfnEntitiesInPVS,Types[TypeLong]);
			addMember("pfnMakeVectors",&structure->pfnMakeVectors,Types[TypeLong]);
			addMember("pfnAngleVectors",&structure->pfnAngleVectors,Types[TypeLong]);
			addMember("pfnCreateEntity",&structure->pfnCreateEntity,Types[TypeLong]);
			addMember("pfnRemoveEntity",&structure->pfnRemoveEntity,Types[TypeLong]);
			addMember("pfnCreateNamedEntity",&structure->pfnCreateNamedEntity,Types[TypeLong]);
			addMember("pfnMakeStatic",&structure->pfnMakeStatic,Types[TypeLong]);
			addMember("pfnEntIsOnFloor",&structure->pfnEntIsOnFloor,Types[TypeLong]);
			addMember("pfnDropToFloor",&structure->pfnDropToFloor,Types[TypeLong]);
			addMember("pfnWalkMove",&structure->pfnWalkMove,Types[TypeLong]);
			addMember("pfnSetOrigin",&structure->pfnSetOrigin,Types[TypeLong]);
			addMember("pfnEmitSound",&structure->pfnEmitSound,Types[TypeLong]);
			addMember("pfnEmitAmbientSound",&structure->pfnEmitAmbientSound,Types[TypeLong]);
			addMember("pfnTraceLine",&structure->pfnTraceLine,Types[TypeLong]);
			addMember("pfnTraceToss",&structure->pfnTraceToss,Types[TypeLong]);
			addMember("pfnTraceMonsterHull",&structure->pfnTraceMonsterHull,Types[TypeLong]);
			addMember("pfnTraceHull",&structure->pfnTraceHull,Types[TypeLong]);
			addMember("pfnTraceModel",&structure->pfnTraceModel,Types[TypeLong]);
			addMember("pfnTraceTexture",&structure->pfnTraceTexture,Types[TypeLong]);
			addMember("pfnTraceSphere",&structure->pfnTraceSphere,Types[TypeLong]);
			addMember("pfnGetAimVector",&structure->pfnGetAimVector,Types[TypeLong]);
			addMember("pfnServerCommand",&structure->pfnServerCommand,Types[TypeLong]);
			addMember("pfnServerExecute",&structure->pfnServerExecute,Types[TypeLong]);
			addMember("pfnClientCommand",&structure->pfnClientCommand,Types[TypeLong]);
			addMember("pfnParticleEffect",&structure->pfnParticleEffect,Types[TypeLong]);
			addMember("pfnLightStyle",&structure->pfnLightStyle,Types[TypeLong]);
			addMember("pfnDecalIndex",&structure->pfnDecalIndex,Types[TypeLong]);
			addMember("pfnPointContents",&structure->pfnPointContents,Types[TypeLong]);
			addMember("pfnMessageBegin",&structure->pfnMessageBegin,Types[TypeLong]);
			addMember("pfnMessageEnd",&structure->pfnMessageEnd,Types[TypeLong]);
			addMember("pfnWriteByte",&structure->pfnWriteByte,Types[TypeLong]);
			addMember("pfnWriteChar",&structure->pfnWriteChar,Types[TypeLong]);
			addMember("pfnWriteShort",&structure->pfnWriteShort,Types[TypeLong]);
			addMember("pfnWriteLong",&structure->pfnWriteLong,Types[TypeLong]);
			addMember("pfnWriteAngle",&structure->pfnWriteAngle,Types[TypeLong]);
			addMember("pfnWriteCoord",&structure->pfnWriteCoord,Types[TypeLong]);
			addMember("pfnWriteString",&structure->pfnWriteString,Types[TypeLong]);
			addMember("pfnWriteEntity",&structure->pfnWriteEntity,Types[TypeLong]);
			addMember("pfnCVarRegister",&structure->pfnCVarRegister,Types[TypeLong]);
			addMember("pfnCVarGetFloat",&structure->pfnCVarGetFloat,Types[TypeLong]);
			addMember("pfnCVarGetString",&structure->pfnCVarGetString,Types[TypeLong]);
			addMember("pfnCVarSetFloat",&structure->pfnCVarSetFloat,Types[TypeLong]);
			addMember("pfnCVarSetString",&structure->pfnCVarSetString,Types[TypeLong]);
			addMember("pfnAlertMessage",&structure->pfnAlertMessage,Types[TypeLong]);
			addMember("pfnEngineFprintf",&structure->pfnEngineFprintf,Types[TypeLong]);
			addMember("pfnPvAllocEntPrivateData",&structure->pfnPvAllocEntPrivateData,Types[TypeLong]);
			addMember("pfnPvEntPrivateData",&structure->pfnPvEntPrivateData,Types[TypeLong]);
			addMember("pfnFreeEntPrivateData",&structure->pfnFreeEntPrivateData,Types[TypeLong]);
			addMember("pfnSzFromIndex",&structure->pfnSzFromIndex,Types[TypeLong]);
			addMember("pfnAllocString",&structure->pfnAllocString,Types[TypeLong]);
			addMember("pfnGetVarsOfEnt",&structure->pfnGetVarsOfEnt,Types[TypeLong]);
			addMember("pfnPEntityOfEntOffset",&structure->pfnPEntityOfEntOffset,Types[TypeLong]);
			addMember("pfnEntOffsetOfPEntity",&structure->pfnEntOffsetOfPEntity,Types[TypeLong]);
			addMember("pfnIndexOfEdict",&structure->pfnIndexOfEdict,Types[TypeLong]);
			addMember("pfnPEntityOfEntIndex",&structure->pfnPEntityOfEntIndex,Types[TypeLong]);
			addMember("pfnFindEntityByVars",&structure->pfnFindEntityByVars,Types[TypeLong]);
			addMember("pfnGetModelPtr",&structure->pfnGetModelPtr,Types[TypeLong]);
			addMember("pfnRegUserMsg",&structure->pfnRegUserMsg,Types[TypeLong]);
			addMember("pfnAnimationAutomove",&structure->pfnAnimationAutomove,Types[TypeLong]);
			addMember("pfnGetBonePosition",&structure->pfnGetBonePosition,Types[TypeLong]);
			addMember("pfnFunctionFromName",&structure->pfnFunctionFromName,Types[TypeLong]);
			addMember("pfnNameForFunction",&structure->pfnNameForFunction,Types[TypeLong]);
			addMember("pfnClientPrintf",&structure->pfnClientPrintf,Types[TypeLong]);
			addMember("pfnServerPrint",&structure->pfnServerPrint,Types[TypeLong]);
			addMember("pfnCmd_Args",&structure->pfnCmd_Args,Types[TypeLong]);
			addMember("pfnCmd_Argv",&structure->pfnCmd_Argv,Types[TypeLong]);
			addMember("pfnCmd_Argc",&structure->pfnCmd_Argc,Types[TypeLong]);
			addMember("pfnGetAttachment",&structure->pfnGetAttachment,Types[TypeLong]);
			addMember("pfnCRC32_Init",&structure->pfnCRC32_Init,Types[TypeLong]);
			addMember("pfnCRC32_ProcessBuffer",&structure->pfnCRC32_ProcessBuffer,Types[TypeLong]);
			addMember("pfnCRC32_ProcessByte",&structure->pfnCRC32_ProcessByte,Types[TypeLong]);
			addMember("pfnCRC32_Final",&structure->pfnCRC32_Final,Types[TypeLong]);
			addMember("pfnRandomLong",&structure->pfnRandomLong,Types[TypeLong]);
			addMember("pfnRandomFloat",&structure->pfnRandomFloat,Types[TypeLong]);
			addMember("pfnSetView",&structure->pfnSetView,Types[TypeLong]);
			addMember("pfnTime",&structure->pfnTime,Types[TypeLong]);
			addMember("pfnCrosshairAngle",&structure->pfnCrosshairAngle,Types[TypeLong]);
			addMember("pfnLoadFileForMe",&structure->pfnLoadFileForMe,Types[TypeLong]);
			addMember("pfnFreeFile",&structure->pfnFreeFile,Types[TypeLong]);
			addMember("pfnEndSection",&structure->pfnEndSection,Types[TypeLong]);
			addMember("pfnCompareFileTime",&structure->pfnCompareFileTime,Types[TypeLong]);
			addMember("pfnGetGameDir",&structure->pfnGetGameDir,Types[TypeLong]);
			addMember("pfnCvar_RegisterVariable",&structure->pfnCvar_RegisterVariable,Types[TypeLong]);
			addMember("pfnFadeClientVolume",&structure->pfnFadeClientVolume,Types[TypeLong]);
			addMember("pfnSetClientMaxspeed",&structure->pfnSetClientMaxspeed,Types[TypeLong]);
			addMember("pfnCreateFakeClient",&structure->pfnCreateFakeClient,Types[TypeLong]);
			addMember("pfnRunPlayerMove",&structure->pfnRunPlayerMove,Types[TypeLong]);
			addMember("pfnNumberOfEntities",&structure->pfnNumberOfEntities,Types[TypeLong]);
			addMember("pfnGetInfoKeyBuffer",&structure->pfnGetInfoKeyBuffer,Types[TypeLong]);
			addMember("pfnInfoKeyValue",&structure->pfnInfoKeyValue,Types[TypeLong]);
			addMember("pfnSetKeyValue",&structure->pfnSetKeyValue,Types[TypeLong]);
			addMember("pfnSetClientKeyValue",&structure->pfnSetClientKeyValue,Types[TypeLong]);
			addMember("pfnIsMapValid",&structure->pfnIsMapValid,Types[TypeLong]);
			addMember("pfnStaticDecal",&structure->pfnStaticDecal,Types[TypeLong]);
			addMember("pfnPrecacheGeneric",&structure->pfnPrecacheGeneric,Types[TypeLong]);
			addMember("pfnGetPlayerUserId",&structure->pfnGetPlayerUserId,Types[TypeLong]);
			addMember("pfnBuildSoundMsg",&structure->pfnBuildSoundMsg,Types[TypeLong]);
			addMember("pfnIsDedicatedServer",&structure->pfnIsDedicatedServer,Types[TypeLong]);
			addMember("pfnCVarGetPointer",&structure->pfnCVarGetPointer,Types[TypeLong]);
			addMember("pfnGetPlayerWONId",&structure->pfnGetPlayerWONId,Types[TypeLong]);
			addMember("pfnInfo_RemoveKey",&structure->pfnInfo_RemoveKey,Types[TypeLong]);
			addMember("pfnGetPhysicsKeyValue",&structure->pfnGetPhysicsKeyValue,Types[TypeLong]);
			addMember("pfnSetPhysicsKeyValue",&structure->pfnSetPhysicsKeyValue,Types[TypeLong]);
			addMember("pfnGetPhysicsInfoString",&structure->pfnGetPhysicsInfoString,Types[TypeLong]);
			addMember("pfnPrecacheEvent",&structure->pfnPrecacheEvent,Types[TypeLong]);
			addMember("pfnPlaybackEvent",&structure->pfnPlaybackEvent,Types[TypeLong]);
			addMember("pfnSetFatPVS",&structure->pfnSetFatPVS,Types[TypeLong]);
			addMember("pfnSetFatPAS",&structure->pfnSetFatPAS,Types[TypeLong]);
			addMember("pfnCheckVisibility ",&structure->pfnCheckVisibility ,Types[TypeLong]);
			addMember("pfnDeltaSetField",&structure->pfnDeltaSetField,Types[TypeLong]);
			addMember("pfnDeltaUnsetField",&structure->pfnDeltaUnsetField,Types[TypeLong]);
			addMember("pfnDeltaAddEncoder",&structure->pfnDeltaAddEncoder,Types[TypeLong]);
			addMember("pfnGetCurrentPlayer",&structure->pfnGetCurrentPlayer,Types[TypeLong]);
			addMember("pfnCanSkipPlayer",&structure->pfnCanSkipPlayer,Types[TypeLong]);
			addMember("pfnDeltaFindField",&structure->pfnDeltaFindField,Types[TypeLong]);
			addMember("pfnDeltaSetFieldByIndex",&structure->pfnDeltaSetFieldByIndex,Types[TypeLong]);
			addMember("pfnDeltaUnsetFieldByIndex",&structure->pfnDeltaUnsetFieldByIndex,Types[TypeLong]);
			addMember("pfnSetGroupMask",&structure->pfnSetGroupMask,Types[TypeLong]);
			addMember("pfnCreateInstancedBaseline",&structure->pfnCreateInstancedBaseline,Types[TypeLong]);
			addMember("pfnCvar_DirectSet",&structure->pfnCvar_DirectSet,Types[TypeLong]);
			addMember("pfnForceUnmodified",&structure->pfnForceUnmodified,Types[TypeLong]);
			addMember("pfnGetPlayerStats",&structure->pfnGetPlayerStats,Types[TypeLong]);
			addMember("pfnAddServerCommand",&structure->pfnAddServerCommand,Types[TypeLong]);
			addMember("pfnVoice_GetClientListening",&structure->pfnVoice_GetClientListening,Types[TypeLong]);
			addMember("pfnVoice_SetClientListening",&structure->pfnVoice_SetClientListening,Types[TypeLong]);
			addMember("pfnGetPlayerAuthId",&structure->pfnGetPlayerAuthId,Types[TypeLong]);
			addMember("pfnSequenceGet",&structure->pfnSequenceGet,Types[TypeLong]);
			addMember("pfnSequencePickSentence",&structure->pfnSequencePickSentence,Types[TypeLong]);
			addMember("pfnGetFileSize",&structure->pfnGetFileSize,Types[TypeLong]);
			addMember("pfnGetApproxWavePlayLen",&structure->pfnGetApproxWavePlayLen,Types[TypeLong]);
			addMember("pfnIsCareerMatch",&structure->pfnIsCareerMatch,Types[TypeLong]);
			addMember("pfnGetLocalizedStringLength",&structure->pfnGetLocalizedStringLength,Types[TypeLong]);
			addMember("pfnRegisterTutorMessageShown",&structure->pfnRegisterTutorMessageShown,Types[TypeLong]);
			addMember("pfnGetTimesTutorMessageShown",&structure->pfnGetTimesTutorMessageShown,Types[TypeLong]);
			addMember("pfnProcessTutorMessageDecayBuffer",&structure->pfnProcessTutorMessageDecayBuffer,Types[TypeLong]);
			addMember("pfnConstructTutorMessageDecayBuffer",&structure->pfnConstructTutorMessageDecayBuffer,Types[TypeLong]);
			addMember("pfnResetTutorMessageDecayData",&structure->pfnResetTutorMessageDecayData,Types[TypeLong]);
			addMember("pfnQueryClientCvarValue",&structure->pfnQueryClientCvarValue,Types[TypeLong]);
			addMember("pfnQueryClientCvarValue2",&structure->pfnQueryClientCvarValue2,Types[TypeLong]);	
		}

		string getName() 
		{
			return "enginefuncs_t *";
		};
};

