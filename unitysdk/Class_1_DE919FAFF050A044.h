#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F00B40DBB5A83F85;
class Class_3_A57C497A7F67FFC9;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GUIStyle; }

#define CLASS_1_DE919FAFF050A044_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x75A9270)
#define CLASS_1_DE919FAFF050A044_METHOD_1_1F10030F822C46ED_OFFSET UNITYSDK_OFFSET(0x75A8D20)
#define CLASS_1_DE919FAFF050A044_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x75A8980)
#define CLASS_1_DE919FAFF050A044_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x75A8A50)
#define CLASS_1_DE919FAFF050A044_METHOD_1_C0D2B63814379CF7_OFFSET UNITYSDK_OFFSET(0x75A8750)
#define CLASS_1_DE919FAFF050A044_METHOD_1_FB5D4A0069D79953_OFFSET UNITYSDK_OFFSET(0x75A8F70)
#define CLASS_1_DE919FAFF050A044__CTOR_OFFSET UNITYSDK_OFFSET(0x75A8620)

inline static constexpr unsigned int Class_1_DE919FAFF050A044_TypeDefinitionIndex = 63497;

class Class_1_DE919FAFF050A044 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F00B40DBB5A83F85*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F00B40DBB5A83F85*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F00B40DBB5A83F85*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C0D2B63814379CF7(::UnityEngine::GUIStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_C0D2B63814379CF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_F00B40DBB5A83F85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F00B40DBB5A83F85*))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Boolean Method_1_1F10030F822C46ED(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_1F10030F822C46ED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FB5D4A0069D79953(::Class_3_A57C497A7F67FFC9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_A57C497A7F67FFC9*))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_FB5D4A0069D79953_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
