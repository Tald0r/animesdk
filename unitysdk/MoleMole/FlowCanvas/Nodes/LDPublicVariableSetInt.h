#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableSet_1.h"

class Class_3_DA02E6BABB5F027E;

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT_DOSET_OFFSET UNITYSDK_OFFSET(0x9903640)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9903810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x9903840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetInt_TypeDefinitionIndex = 43426;

	class LDPublicVariableSetInt : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableSet_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::Class_3_DA02E6BABB5F027E* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DA02E6BABB5F027E*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::Class_3_DA02E6BABB5F027E* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DA02E6BABB5F027E*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
