#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7D7520)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D7560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C___TRYLOADNEXTHADALROOM_B__9_1_OFFSET UNITYSDK_OFFSET(0xA7D7570)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnterNextHadalRoom___c_TypeDefinitionIndex = 63886;

	class LD_EnterNextHadalRoom___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LD_EnterNextHadalRoom___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_EnterNextHadalRoom___c**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x3B300);
		}
		static ::System::Action_1<::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*>** StaticGet___9__9_1()
		{
			return (::System::Action_1<::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*>**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x3B308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CTOR_OFFSET))(this);
		}

		::System::Void __TryLoadNextHadalRoom_b__9_1(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* tCtx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C___TRYLOADNEXTHADALROOM_B__9_1_OFFSET))(this, tCtx);
		}
	};
}
