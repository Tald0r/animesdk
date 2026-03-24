#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4107ECDD60341DBB;
namespace MoleMole { class ServerListInfo; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_4107ECDD60341DBB_CLASS_1_BED3034BEE033EE7_METHOD_1_AB0D5AE688458ECB_OFFSET UNITYSDK_OFFSET(0xD49B190)
#define CLASS_2_4107ECDD60341DBB_CLASS_1_BED3034BEE033EE7__CTOR_OFFSET UNITYSDK_OFFSET(0xD49B180)

inline static constexpr unsigned int Class_2_4107ECDD60341DBB_Class_1_BED3034BEE033EE7_TypeDefinitionIndex = 78474;

class Class_2_4107ECDD60341DBB_Class_1_BED3034BEE033EE7 : public ::System::Object
{
public:
	::Class_2_4107ECDD60341DBB* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::MoleMole::ServerListInfo* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_BED3034BEE033EE7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB0D5AE688458ECB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_BED3034BEE033EE7_METHOD_1_AB0D5AE688458ECB_OFFSET))(this, a1);
	}
};
