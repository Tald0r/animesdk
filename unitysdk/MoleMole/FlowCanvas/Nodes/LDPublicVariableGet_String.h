#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableGet_1.h"

class Class_3_DA02E6BABB5F027E;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING_DOGET_OFFSET UNITYSDK_OFFSET(0x8AF9450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF94E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING___BASE_DOGET_OFFSET UNITYSDK_OFFSET(0x8AF9510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableGet_String_TypeDefinitionIndex = 44875;

	class LDPublicVariableGet_String : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableGet_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING__CTOR_OFFSET))(this);
		}

		::System::Void DoGet(::Class_3_DA02E6BABB5F027E* ctx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DA02E6BABB5F027E*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING_DOGET_OFFSET))(this, ctx, key);
		}

		::System::Void __base_DoGet(::Class_3_DA02E6BABB5F027E* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DA02E6BABB5F027E*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING___BASE_DOGET_OFFSET))(this, P0, P1);
		}
	};
}
