#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STATETREEGAMEPLAY_STATETREESYSTEMSCHEMA_EXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x7663C0)
#define STATETREEGAMEPLAY_STATETREESYSTEMSCHEMA_EXTERNALDATACOLLECTOR_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x2FB060)
#define STATETREEGAMEPLAY_STATETREESYSTEMSCHEMA_EXTERNALDATACOLLECTOR_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x766470)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeSystemSchema_ExternalDataCollector_TypeDefinitionIndex = 45088;

	struct alignas(1) StateTreeSystemSchema_ExternalDataCollector
	{
		::System::Boolean get_IsBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEMSCHEMA_EXTERNALDATACOLLECTOR_GET_ISBOUND_OFFSET))(this);
		}

		/*
		::System::Boolean CollectExternalData(::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTree& stateTree, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> externalDataDescs, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> outDataViews)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTree&, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEMSCHEMA_EXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET))(this, context, stateTree, externalDataDescs, outDataViews);
		}
		*/

		/*
		::System::Boolean StateTreeCore_IExternalDataCollector_CollectExternalData(::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTree& stateTree, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> externalDataDescs, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> outDataViews)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTree&, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEMSCHEMA_EXTERNALDATACOLLECTOR_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET))(this, context, stateTree, externalDataDescs, outDataViews);
		}
		*/
	};
}
