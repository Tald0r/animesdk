#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace Foundation::ViewObject { class ViewObjectManager; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91C9520)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS42_0___SENDGETGROUPMEMBERSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x91C9530)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS42_0___SENDGETGROUPMEMBERSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x91C95B0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass42_0_TypeDefinitionIndex = 49695;

	class ViewObjectManager___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x10
		::System::Int32 tag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void __SendGetGroupMemberState_b__0(::Class_0_16E4307DCC419505_7* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS42_0___SENDGETGROUPMEMBERSTATE_B__0_OFFSET))(this, msg);
		}

		::System::Void __SendGetGroupMemberState_b__1(::Class_0_16E4307DCC419505_7* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS42_0___SENDGETGROUPMEMBERSTATE_B__1_OFFSET))(this, error);
		}
	};
}
