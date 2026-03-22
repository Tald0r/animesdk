#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5ED740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5ED780)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C___TRYLOADNEXTHADALROOM_B__9_1_OFFSET UNITYSDK_OFFSET(0xA5ED790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnterNextHadalRoom___c_TypeDefinitionIndex = 37561;

	class LD_EnterNextHadalRoom___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*>** StaticGet___9__9_1()
		{
			return (::System::Action_1<::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*>**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x386F0);
		}
		static ::MoleMole::FlowCanvas::Nodes::LD_EnterNextHadalRoom___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_EnterNextHadalRoom___c**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x386F8);
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
