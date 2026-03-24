#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0xCD40E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xCD412B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveAbilityByLevelAbilityConfigIDList_TypeDefinitionIndex = 75128;

	class LDRemoveAbilityByLevelAbilityConfigIDList : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* abilityIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET))(this, abilityIdList);
		}
	};
}
