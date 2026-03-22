#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A3D4B0969489E4FC_Class_2_024E742EE0CA8F62;
class Class_2_A3D4B0969489E4FC_Class_2_CBE3775889953650;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_A3D4B0969489E4FC_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x712A5E0)
#define CLASS_2_A3D4B0969489E4FC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x712A820)
#define CLASS_2_A3D4B0969489E4FC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x712A960)
#define CLASS_2_A3D4B0969489E4FC__CTOR_OFFSET UNITYSDK_OFFSET(0x712A950)

inline static constexpr unsigned int Class_2_A3D4B0969489E4FC_TypeDefinitionIndex = 41158;

class Class_2_A3D4B0969489E4FC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_A3D4B0969489E4FC_Class_2_024E742EE0CA8F62*>* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x20
	::MoleMole::MonoGamepadNavigatableList* Field_2_5; // 0x28
	::MonoUITableScrollV2* Field_2_1; // 0x30
	::UnityEngine::Animation* Field_2_0; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_A3D4B0969489E4FC_Class_2_CBE3775889953650*>* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D4B0969489E4FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A3D4B0969489E4FC_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D4B0969489E4FC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A3D4B0969489E4FC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
