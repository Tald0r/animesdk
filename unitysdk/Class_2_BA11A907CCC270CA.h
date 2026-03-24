#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A5F167CAAA013FB.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B8A28A306558B7F;
class Class_2_208CC9941471731A_53;
namespace MoleMole { class MonoEntity; }
namespace System { class String; }

#define CLASS_2_BA11A907CCC270CA_METHOD_2_0CE0AF56CB7D1263_OFFSET UNITYSDK_OFFSET(0x92BEE60)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0x92BEDC0)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x92BEE40)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_3615D8C2B7A57923_OFFSET UNITYSDK_OFFSET(0x92BEEC0)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_3D7746DA1115CF58_OFFSET UNITYSDK_OFFSET(0x92BEC80)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_4BAA8431768C8B75_OFFSET UNITYSDK_OFFSET(0x92BED30)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_7C9F3E12F350460D_OFFSET UNITYSDK_OFFSET(0x92BEE30)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92BEC10)
#define CLASS_2_BA11A907CCC270CA_METHOD_2_CCC8D6DC3E7C04F2_OFFSET UNITYSDK_OFFSET(0x92BEE50)
#define CLASS_2_BA11A907CCC270CA__CTOR_OFFSET UNITYSDK_OFFSET(0x92BEDB0)

inline static constexpr unsigned int Class_2_BA11A907CCC270CA_TypeDefinitionIndex = 68113;

class Class_2_BA11A907CCC270CA : public ::Class_1_7A5F167CAAA013FB
{
public:
	::MoleMole::MonoEntity* Field_2_0; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>* Method_2_3D7746DA1115CF58()
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_3D7746DA1115CF58_OFFSET))(this);
	}

	::System::Void Method_2_4BAA8431768C8B75(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_4BAA8431768C8B75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C9F3E12F350460D(::MoleMole::MonoEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_7C9F3E12F350460D_OFFSET))(this, a1);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::MoleMole::MonoEntity* Method_2_CCC8D6DC3E7C04F2()
	{
		return ((::MoleMole::MonoEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_CCC8D6DC3E7C04F2_OFFSET))(this);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>* Method_2_0CE0AF56CB7D1263()
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_0CE0AF56CB7D1263_OFFSET))(this);
	}

	::System::Void Method_2_3615D8C2B7A57923(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::MoleMole::MonoEntity* a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::MoleMole::MonoEntity*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BA11A907CCC270CA_METHOD_2_3615D8C2B7A57923_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
