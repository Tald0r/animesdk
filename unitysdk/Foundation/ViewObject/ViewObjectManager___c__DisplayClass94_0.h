#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_204C453CC79AE4E0;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS94_0__ACTIVEROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xA4006F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS94_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4006E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass94_0_TypeDefinitionIndex = 74575;

	class ViewObjectManager___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* rpcCallback; // 0x18
		::Class_1_204C453CC79AE4E0* point; // 0x20
		::System::UInt32 groupID; // 0x28
		::System::UInt32 floorID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS94_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveRollbackPoint_b__0(::Class_0_16E4307DCC419505_5* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS94_0__ACTIVEROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
