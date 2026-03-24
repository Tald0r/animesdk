#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFC990)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0___REALSETVOGROUPSTATEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x14EFC9A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0___REALSETVOGROUPSTATEVALUE_B__1_OFFSET UNITYSDK_OFFSET(0x14EFCAC0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass47_0_TypeDefinitionIndex = 74577;

	class ViewObjectManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::String* stateName; // 0x10
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x18
		::System::Action_1<::System::Boolean>* callback; // 0x20
		::System::Int32 value; // 0x28
		::Foundation::ViewObject::GroupMemberIdentifier identifier; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void __RealSetVOGroupStateValue_b__0(::Class_0_16E4307DCC419505_5* success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0___REALSETVOGROUPSTATEVALUE_B__0_OFFSET))(this, success);
		}

		::System::Void __RealSetVOGroupStateValue_b__1(::Class_0_16E4307DCC419505_5* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS47_0___REALSETVOGROUPSTATEVALUE_B__1_OFFSET))(this, error);
		}
	};
}
