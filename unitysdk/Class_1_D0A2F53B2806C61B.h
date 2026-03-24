#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_869FAAA970E9FD7E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_A57C497A7F67FFC9;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D0A2F53B2806C61B_METHOD_1_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x75F05B0)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x75F0760)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x75F0890)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x75F0730)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x75EF780)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x75F0740)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x75F0700)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x75EF790)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_79E7694E9DE47BB9_OFFSET UNITYSDK_OFFSET(0x75F02D0)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_1_OFFSET UNITYSDK_OFFSET(0x75F04F0)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_2_OFFSET UNITYSDK_OFFSET(0x75F0550)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_3_OFFSET UNITYSDK_OFFSET(0x75F0630)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_OFFSET UNITYSDK_OFFSET(0x75F0480)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x75F0750)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x75F04E0)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_C7F8FFC64F52266F_1_OFFSET UNITYSDK_OFFSET(0x75F0690)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_C7F8FFC64F52266F_OFFSET UNITYSDK_OFFSET(0x75F05C0)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x75F0710)
#define CLASS_1_D0A2F53B2806C61B_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x75EF760)
#define CLASS_1_D0A2F53B2806C61B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x75EF6C0)
#define CLASS_1_D0A2F53B2806C61B__CTOR_OFFSET UNITYSDK_OFFSET(0x75EF5E0)

inline static constexpr unsigned int Class_1_D0A2F53B2806C61B_TypeDefinitionIndex = 42298;

class Class_1_D0A2F53B2806C61B : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_12; // 0x10
	::System::Action_1<::UnityEngine::Collider*>* Field_1_11; // 0x18
	::UnityEngine::Transform* Field_1_13; // 0x20
	::System::Action_1<::UnityEngine::Collider*>* Field_1_10; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Single Field_1_9; // 0x38
	::Enum_3_869FAAA970E9FD7E Field_1_3; // 0x3C
	::System::Single Field_1_5; // 0x40
	::UnityEngine::Vector3 Field_1_2; // 0x44
	::UnityEngine::Vector3 Field_1_0; // 0x50
	::UnityEngine::Quaternion Field_1_1; // 0x5C
	::System::Single Field_1_6; // 0x6C
	::System::Single Field_1_7; // 0x70
	::System::Single Field_1_8; // 0x74
	::System::Boolean Field_1_14; // 0x78

	::System::Void _ctor(::Class_3_A57C497A7F67FFC9* a1, ::Enum_3_869FAAA970E9FD7E a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A57C497A7F67FFC9*, ::Enum_3_869FAAA970E9FD7E, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* a1, ::Enum_3_869FAAA970E9FD7E a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Enum_3_869FAAA970E9FD7E, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EECE8924BBFC43C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_6EECE8924BBFC43C_OFFSET))(this);
	}

	::System::Void Method_1_7D3C81A2123A1E8D(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_OFFSET))(this, a1, a2);
	}

	::Enum_3_869FAAA970E9FD7E Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_869FAAA970E9FD7E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_7D3C81A2123A1E8D_1(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D3C81A2123A1E8D_2(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_10FFF5D129383396(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_10FFF5D129383396_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7F8FFC64F52266F(::System::Action_1<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_C7F8FFC64F52266F_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D3C81A2123A1E8D_3(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_7D3C81A2123A1E8D_3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_79E7694E9DE47BB9()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_79E7694E9DE47BB9_OFFSET))(this);
	}

	::System::Void Method_1_C7F8FFC64F52266F_1(::System::Action_1<::UnityEngine::Collider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_C7F8FFC64F52266F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_869FAAA970E9FD7E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_869FAAA970E9FD7E))((::PBYTE)hIl2Cpp + CLASS_1_D0A2F53B2806C61B_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}
};
