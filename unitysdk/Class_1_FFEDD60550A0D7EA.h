#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_1_EDF4DCFB9AF1C323;
class Class_2_126E26F0DF7D8CF7;
namespace MoleMole::Config { class MapIconTrait; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_1_FFEDD60550A0D7EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9209BF0)
#define CLASS_1_FFEDD60550A0D7EA_METHOD_1_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x9209D70)
#define CLASS_1_FFEDD60550A0D7EA_METHOD_1_DCAAE1005C7B2A2E_OFFSET UNITYSDK_OFFSET(0x9209F30)
#define CLASS_1_FFEDD60550A0D7EA__CTOR_OFFSET UNITYSDK_OFFSET(0x9209AC0)

inline static constexpr unsigned int Class_1_FFEDD60550A0D7EA_TypeDefinitionIndex = 80708;

class Class_1_FFEDD60550A0D7EA : public ::System::Object
{
public:
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_1_4; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_3; // 0x18
	::Class_2_126E26F0DF7D8CF7* Field_1_0; // 0x20
	::MoleMole::Config::MapIconTrait* Field_1_1; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_2; // 0x34

	::System::Void _ctor(::Class_2_126E26F0DF7D8CF7* a1, ::MoleMole::Config::MapIconTrait* a2, ::Foundation::ViewObject::GroupMemberIdentifier a3, ::Class_2_000597E145D7A42A<::System::Boolean>* a4, ::System::Boolean a5, ::Class_1_EDF4DCFB9AF1C323* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_126E26F0DF7D8CF7*, ::MoleMole::Config::MapIconTrait*, ::Foundation::ViewObject::GroupMemberIdentifier, ::Class_2_000597E145D7A42A<::System::Boolean>*, ::System::Boolean, ::Class_1_EDF4DCFB9AF1C323*))((::PBYTE)hIl2Cpp + CLASS_1_FFEDD60550A0D7EA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFEDD60550A0D7EA_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFEDD60550A0D7EA_METHOD_1_B556EADFE34BD60F_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_DCAAE1005C7B2A2E()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFEDD60550A0D7EA_METHOD_1_DCAAE1005C7B2A2E_OFFSET))(this);
	}
};
