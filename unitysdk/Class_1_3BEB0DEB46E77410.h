#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig_Item.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_303;
namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3BEB0DEB46E77410_METHOD_1_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0xB54A570)
#define CLASS_1_3BEB0DEB46E77410_METHOD_1_72112191763F9A6A_1_OFFSET UNITYSDK_OFFSET(0xB54A900)
#define CLASS_1_3BEB0DEB46E77410_METHOD_1_72112191763F9A6A_2_OFFSET UNITYSDK_OFFSET(0xB54A970)
#define CLASS_1_3BEB0DEB46E77410_METHOD_1_72112191763F9A6A_OFFSET UNITYSDK_OFFSET(0xB54A500)
#define CLASS_1_3BEB0DEB46E77410_METHOD_1_C18F24AAAD5F1249_OFFSET UNITYSDK_OFFSET(0xB54A690)
#define CLASS_1_3BEB0DEB46E77410__CTOR_OFFSET UNITYSDK_OFFSET(0xB54A4F0)

inline static constexpr unsigned int Class_1_3BEB0DEB46E77410_TypeDefinitionIndex = 43344;

class Class_1_3BEB0DEB46E77410 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* Field_1_6; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x24
	::MoleMole::Config::CutSceneEndMode Field_1_5; // 0x28
	::System::Boolean Field_1_1; // 0x29
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0DEB46E77410__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0DEB46E77410_METHOD_1_72112191763F9A6A_OFFSET))(this);
	}

	::System::Void Method_1_0FA0973E87FBD363(::Class_0_16E4307DCC419505_303* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_303*))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0DEB46E77410_METHOD_1_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_1_C18F24AAAD5F1249(::MoleMole::Config::SceneChessboardCutSceneConfig* a1, ::MoleMole::Config::ScenePerformConfig* a2, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*, ::MoleMole::Config::ScenePerformConfig*, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0DEB46E77410_METHOD_1_C18F24AAAD5F1249_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A_1()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0DEB46E77410_METHOD_1_72112191763F9A6A_1_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A_2()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BEB0DEB46E77410_METHOD_1_72112191763F9A6A_2_OFFSET))(this);
	}
};
