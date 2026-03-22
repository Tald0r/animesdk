#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARHPINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0xE0EFE30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARHPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F0200)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAvatarHpInfo_TypeDefinitionIndex = 39678;

	class LDGetAvatarHpInfo : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Collections::Generic::List_1<::System::Single>*>
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* outValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARHPINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETAVATARHPINFO_INVOKE_OFFSET))(this);
		}
	};
}
