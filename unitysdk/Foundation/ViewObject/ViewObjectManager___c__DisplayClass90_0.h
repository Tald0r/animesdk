#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_InnerCreateMemberListHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_3_025FF4981524A424_109;
class Class_3_1A345EAE5F749316_118;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS90_0__CREATEGROUPMEMBERLIST_B__0_OFFSET UNITYSDK_OFFSET(0xA0BFF80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS90_0__CREATEGROUPMEMBERLIST_B__1_OFFSET UNITYSDK_OFFSET(0xA0C0170)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BFF70)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass90_0_TypeDefinitionIndex = 74562;

	class ViewObjectManager___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>* rspCallback; // 0x10
		::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle handle; // 0x18
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Class_3_1A345EAE5F749316_118*>*>* errorCallback; // 0x28
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateGroupMemberList_b__0(::Class_3_025FF4981524A424_109* message, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_109*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS90_0__CREATEGROUPMEMBERLIST_B__0_OFFSET))(this, message, _);
		}

		::System::Void _CreateGroupMemberList_b__1(::Class_3_025FF4981524A424_109* err, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_109*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS90_0__CREATEGROUPMEMBERLIST_B__1_OFFSET))(this, err, _);
		}
	};
}
