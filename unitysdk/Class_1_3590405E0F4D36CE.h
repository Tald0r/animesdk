#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_BB0E1DD4C880324C.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class String; }

#define CLASS_1_3590405E0F4D36CE_METHOD_1_2A0AD3ABBD6BB40E_OFFSET UNITYSDK_OFFSET(0x8B68A00)
#define CLASS_1_3590405E0F4D36CE_METHOD_1_3979F8726BD0E71A_OFFSET UNITYSDK_OFFSET(0x8B39F20)
#define CLASS_1_3590405E0F4D36CE_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x8B690D0)
#define CLASS_1_3590405E0F4D36CE_METHOD_1_805C56F44231AEF9_1_OFFSET UNITYSDK_OFFSET(0x8B68E80)
#define CLASS_1_3590405E0F4D36CE_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x8B68B50)
#define CLASS_1_3590405E0F4D36CE_METHOD_1_8C8E8C21F8465353_OFFSET UNITYSDK_OFFSET(0x8B69040)
#define CLASS_1_3590405E0F4D36CE_METHOD_1_E085FF5813989118_OFFSET UNITYSDK_OFFSET(0x8B68D10)
#define CLASS_1_3590405E0F4D36CE__CTOR_OFFSET UNITYSDK_OFFSET(0x8B689F0)

inline static constexpr unsigned int Class_1_3590405E0F4D36CE_TypeDefinitionIndex = 54395;

class Class_1_3590405E0F4D36CE : public ::System::Object
{
public:
	::MoleMole::UICinemaPlayPageController* Field_1_4; // 0x10
	::System::String* Field_1_2; // 0x18
	::MoleMole::EntityHandle Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x30
	::System::Int32 Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A0AD3ABBD6BB40E(::Enum_3_BB0E1DD4C880324C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB0E1DD4C880324C))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_METHOD_1_2A0AD3ABBD6BB40E_OFFSET))(this, a1);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_E085FF5813989118(::Enum_3_BB0E1DD4C880324C a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB0E1DD4C880324C, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_METHOD_1_E085FF5813989118_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_805C56F44231AEF9_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_METHOD_1_805C56F44231AEF9_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_8C8E8C21F8465353(::System::String* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_METHOD_1_8C8E8C21F8465353_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3979F8726BD0E71A(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_METHOD_1_3979F8726BD0E71A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3590405E0F4D36CE_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}
};
