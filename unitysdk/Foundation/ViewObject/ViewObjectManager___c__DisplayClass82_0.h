#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x71A5630)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS82_0__MARKGROUPCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x71A5640)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS82_0__MARKGROUPCOMPLETE_B__1_OFFSET UNITYSDK_OFFSET(0x71A5690)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass82_0_TypeDefinitionIndex = 74576;

	class ViewObjectManager___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Void _MarkGroupComplete_b__0(::Class_0_16E4307DCC419505_5* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS82_0__MARKGROUPCOMPLETE_B__0_OFFSET))(this, message);
		}

		::System::Void _MarkGroupComplete_b__1(::Class_0_16E4307DCC419505_5* err)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS82_0__MARKGROUPCOMPLETE_B__1_OFFSET))(this, err);
		}
	};
}
