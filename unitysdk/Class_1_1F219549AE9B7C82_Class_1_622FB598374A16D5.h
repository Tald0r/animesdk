#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIFriendDetailContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_622FB598374A16D5_METHOD_1_BFFE0D476A0214C1_1_OFFSET UNITYSDK_OFFSET(0xB60C0E0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_622FB598374A16D5_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0xB60BF00)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_622FB598374A16D5__CTOR_OFFSET UNITYSDK_OFFSET(0xB60BEF0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_622FB598374A16D5_TypeDefinitionIndex = 62813;

class Class_1_1F219549AE9B7C82_Class_1_622FB598374A16D5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>* Field_1_4; // 0x10
	::MoleMole::UIFriendDetailContext* Field_1_0; // 0x18
	::UnityEngine::Events::UnityAction* Field_1_3; // 0x20
	::Enum_3_5F152DBF108B0858 Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_622FB598374A16D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_622FB598374A16D5_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFFE0D476A0214C1_1(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_622FB598374A16D5_METHOD_1_BFFE0D476A0214C1_1_OFFSET))(this, a1);
	}
};
