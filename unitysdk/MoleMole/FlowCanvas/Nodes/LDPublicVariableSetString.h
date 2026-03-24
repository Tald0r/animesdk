#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableSet_1.h"

class Class_3_DA02E6BABB5F027E;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING_DOSET_OFFSET UNITYSDK_OFFSET(0x757E7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x757E9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x757E9D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetString_TypeDefinitionIndex = 38430;

	class LDPublicVariableSetString : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableSet_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::Class_3_DA02E6BABB5F027E* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DA02E6BABB5F027E*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::Class_3_DA02E6BABB5F027E* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DA02E6BABB5F027E*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
