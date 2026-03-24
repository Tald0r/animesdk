#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_98B7A76C378FB1D8_METHOD_1_235F2F68A3E18565_1_OFFSET UNITYSDK_OFFSET(0x8462C60)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_235F2F68A3E18565_OFFSET UNITYSDK_OFFSET(0x8461920)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_2534A9AEEDE13109_OFFSET UNITYSDK_OFFSET(0x8462A50)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_86D9E07BD0992AFF_OFFSET UNITYSDK_OFFSET(0x8461C70)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x8462670)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_9CA5A80F6B5B9E01_1_OFFSET UNITYSDK_OFFSET(0x8462C50)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x8461910)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8461BD0)
#define CLASS_1_98B7A76C378FB1D8_METHOD_1_FF9D70DA28C905A2_OFFSET UNITYSDK_OFFSET(0x8461A50)
#define CLASS_1_98B7A76C378FB1D8__CTOR_OFFSET UNITYSDK_OFFSET(0x8461870)

inline static constexpr unsigned int Class_1_98B7A76C378FB1D8_TypeDefinitionIndex = 63268;

class Class_1_98B7A76C378FB1D8 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_12; // 0x20
	::Foundation::AssetPath Field_1_0; // 0x28
	::Il2CppArray<::System::String*>* Field_1_13; // 0x38
	::UnityEngine::GameObject* Field_1_5; // 0x40
	::Foundation::AssetPath Field_1_1; // 0x48
	::System::Boolean Field_1_9; // 0x58
	::System::Boolean Field_1_10; // 0x59
	::System::Boolean Field_1_8; // 0x5A
	::System::Boolean Field_1_7; // 0x5B
	::MoleMole::Config::EntityType Field_1_4; // 0x5C
	::System::Int32 Field_1_2; // 0x60
	::System::UInt32 Field_1_14; // 0x64
	::System::Int32 Field_1_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_235F2F68A3E18565(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_235F2F68A3E18565_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF9D70DA28C905A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_FF9D70DA28C905A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_86D9E07BD0992AFF(::UnityEngine::Color a1, ::System::Single a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Color a4, ::UnityEngine::Cubemap* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::UnityEngine::Cubemap*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_86D9E07BD0992AFF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01_1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_9CA5A80F6B5B9E01_1_OFFSET))(this);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_1_235F2F68A3E18565_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_235F2F68A3E18565_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2534A9AEEDE13109(::UnityEngine::Material* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_98B7A76C378FB1D8_METHOD_1_2534A9AEEDE13109_OFFSET))(this, a1);
	}
};
