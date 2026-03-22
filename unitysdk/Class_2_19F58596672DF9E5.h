#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_83665B095F1535B5_7;
class Class_1_96BF869E23630673;
class Class_2_5EA04932F3E7FC4B;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_19F58596672DF9E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB585CC0)
#define CLASS_2_19F58596672DF9E5_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xB585AD0)
#define CLASS_2_19F58596672DF9E5_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB585AC0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_06203D43FC0EF766_OFFSET UNITYSDK_OFFSET(0xB5894A0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_156AD3BEED1C9042_OFFSET UNITYSDK_OFFSET(0xB586850)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3BCB6A831A0CC363_OFFSET UNITYSDK_OFFSET(0xB5882A0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_1_OFFSET UNITYSDK_OFFSET(0xB588100)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_2_OFFSET UNITYSDK_OFFSET(0xB5888E0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0xB587E90)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3D7C8028EBFBA9A4_OFFSET UNITYSDK_OFFSET(0xB587CF0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3FD3EB647B47C885_OFFSET UNITYSDK_OFFSET(0xB588AC0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_42E626231565E1E4_OFFSET UNITYSDK_OFFSET(0xB589B50)
#define CLASS_2_19F58596672DF9E5_METHOD_2_43841C47716286CE_OFFSET UNITYSDK_OFFSET(0xB586680)
#define CLASS_2_19F58596672DF9E5_METHOD_2_482EEA11E3F46C3E_OFFSET UNITYSDK_OFFSET(0xB585F70)
#define CLASS_2_19F58596672DF9E5_METHOD_2_5136A6E1FA64E327_OFFSET UNITYSDK_OFFSET(0xB588F40)
#define CLASS_2_19F58596672DF9E5_METHOD_2_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0xB585B90)
#define CLASS_2_19F58596672DF9E5_METHOD_2_6FC8AF496F5916AD_OFFSET UNITYSDK_OFFSET(0xB5871A0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0xB5861D0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0xB588DA0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_1_OFFSET UNITYSDK_OFFSET(0xB589000)
#define CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0xB587B40)
#define CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_1_OFFSET UNITYSDK_OFFSET(0xB5892A0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_2_OFFSET UNITYSDK_OFFSET(0xB5893A0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xB5881A0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0xB585E40)
#define CLASS_2_19F58596672DF9E5_METHOD_2_956A6D161F2AADFA_OFFSET UNITYSDK_OFFSET(0xB586A50)
#define CLASS_2_19F58596672DF9E5_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB587280)
#define CLASS_2_19F58596672DF9E5_METHOD_2_9BE88A8FED9C577F_OFFSET UNITYSDK_OFFSET(0xB588960)
#define CLASS_2_19F58596672DF9E5_METHOD_2_A5A7892595F9E98C_1_OFFSET UNITYSDK_OFFSET(0xB5899C0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_A5A7892595F9E98C_OFFSET UNITYSDK_OFFSET(0xB587F70)
#define CLASS_2_19F58596672DF9E5_METHOD_2_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0xB589210)
#define CLASS_2_19F58596672DF9E5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB5891B0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_CB15442998B4BFD1_OFFSET UNITYSDK_OFFSET(0xB587300)
#define CLASS_2_19F58596672DF9E5_METHOD_2_CF50FCA720F99C48_OFFSET UNITYSDK_OFFSET(0xB5883F0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0xB588690)
#define CLASS_2_19F58596672DF9E5_METHOD_2_DF64E0A15E40C51F_OFFSET UNITYSDK_OFFSET(0xB5877B0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_E3F72457158BF602_OFFSET UNITYSDK_OFFSET(0xB5863C0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xB5878F0)
#define CLASS_2_19F58596672DF9E5_ONCREATE_OFFSET UNITYSDK_OFFSET(0xB585C60)
#define CLASS_2_19F58596672DF9E5_UPDATE_OFFSET UNITYSDK_OFFSET(0xB5867C0)
#define CLASS_2_19F58596672DF9E5__CTOR_OFFSET UNITYSDK_OFFSET(0xB587600)

inline static constexpr unsigned int Class_2_19F58596672DF9E5_TypeDefinitionIndex = 64404;

class Class_2_19F58596672DF9E5 : public ::Foundation::SingletonDisposable_1<::Class_2_19F58596672DF9E5*>
{
public:
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_5EA04932F3E7FC4B*>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_5EA04932F3E7FC4B*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_96BF869E23630673*>* Field_2_10; // 0x20
	::Class_2_5EA04932F3E7FC4B* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x30
	::System::Collections::Generic::Queue_1<::Class_2_5EA04932F3E7FC4B*>* Field_2_4; // 0x38
	::System::Int32 Field_2_6; // 0x40
	::System::Boolean Field_2_3; // 0x44
	::System::Int32 Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FC8AF496F5916AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_6FC8AF496F5916AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_956A6D161F2AADFA(::System::Single a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_956A6D161F2AADFA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7E0102A7D81125F5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_OFFSET))(this, a1);
	}

	::Class_1_96BF869E23630673* Method_2_3D7C8028EBFBA9A4(::System::String* a1)
	{
		return ((::Class_1_96BF869E23630673*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3D7C8028EBFBA9A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_5EA04932F3E7FC4B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5EA04932F3E7FC4B*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5A7892595F9E98C(::Class_2_5EA04932F3E7FC4B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5EA04932F3E7FC4B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_A5A7892595F9E98C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F54650C0C7FD373(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_8F54650C0C7FD373_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCB6A831A0CC363(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3BCB6A831A0CC363_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_73052712910A9EE7_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_2_5EA04932F3E7FC4B* Method_2_CF50FCA720F99C48(::System::String* a1, ::System::String* a2, ::System::Action_1<::UnityEngine::Transform*>* a3, ::System::Action_1<::UnityEngine::Transform*>* a4, ::System::Action* a5, ::System::Action* a6, ::System::Boolean a7, ::UnityEngine::Transform* a8, ::Class_1_83665B095F1535B5_7* a9)
	{
		return ((::Class_2_5EA04932F3E7FC4B*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::UnityEngine::Transform*, ::Class_1_83665B095F1535B5_7*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_CF50FCA720F99C48_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_3C8305164A0C9B06_1(::Class_2_5EA04932F3E7FC4B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5EA04932F3E7FC4B*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_D675670EA8F43CD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB15442998B4BFD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_CB15442998B4BFD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9BE88A8FED9C577F(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_9BE88A8FED9C577F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_43841C47716286CE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_43841C47716286CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3FD3EB647B47C885(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3FD3EB647B47C885_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E3F72457158BF602(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_E3F72457158BF602_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_7DB540F7EC4E5E2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_5136A6E1FA64E327(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_5136A6E1FA64E327_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_482EEA11E3F46C3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_482EEA11E3F46C3E_OFFSET))(this);
	}

	::System::Void Method_2_7E0102A7D81125F5_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_5EA04932F3E7FC4B* Method_2_57E9EA809B95083F()
	{
		return ((::Class_2_5EA04932F3E7FC4B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_57E9EA809B95083F_OFFSET))(this);
	}

	::System::Void Method_2_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_C9312916D3A31323_OFFSET))(this);
	}

	::System::Void Method_2_DF64E0A15E40C51F(::Class_2_5EA04932F3E7FC4B* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5EA04932F3E7FC4B*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_DF64E0A15E40C51F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3C8305164A0C9B06_2(::Class_2_5EA04932F3E7FC4B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5EA04932F3E7FC4B*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_86143FF46EAE82B7_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_156AD3BEED1C9042(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_156AD3BEED1C9042_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_86143FF46EAE82B7_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_06203D43FC0EF766(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_06203D43FC0EF766_OFFSET))(this, a1);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_A5A7892595F9E98C_1(::Class_2_5EA04932F3E7FC4B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5EA04932F3E7FC4B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_A5A7892595F9E98C_1_OFFSET))(this, a1, a2);
	}

	::Class_2_5EA04932F3E7FC4B* Method_2_42E626231565E1E4(::System::String* a1, ::System::Action_1<::UnityEngine::Transform*>* a2, ::System::Action_1<::UnityEngine::Transform*>* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::UnityEngine::Transform* a7, ::Class_1_83665B095F1535B5_7* a8)
	{
		return ((::Class_2_5EA04932F3E7FC4B*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::UnityEngine::Transform*, ::Class_1_83665B095F1535B5_7*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_42E626231565E1E4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
