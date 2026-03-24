#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4005C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS44_0___REALGETVOGROUPSTATEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0xA4005D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS44_0___REALGETVOGROUPSTATEVALUE_B__1_OFFSET UNITYSDK_OFFSET(0xA400690)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass44_0_TypeDefinitionIndex = 74579;

	class ViewObjectManager___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Boolean, ::System::Int32>* callback; // 0x10
		::System::String* stateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void __RealGetVOGroupStateValue_b__0(::Class_0_16E4307DCC419505_5* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS44_0___REALGETVOGROUPSTATEVALUE_B__0_OFFSET))(this, success);
		}

		::System::Void __RealGetVOGroupStateValue_b__1(::Class_0_16E4307DCC419505_5* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS44_0___REALGETVOGROUPSTATEVALUE_B__1_OFFSET))(this, error);
		}
	};
}
