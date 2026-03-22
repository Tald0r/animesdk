#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IAssetPool; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_38DAA2C710A78E2B_METHOD_1_5312956B9D2DB899_OFFSET UNITYSDK_OFFSET(0x138712B0)
#define CLASS_1_38DAA2C710A78E2B_METHOD_1_7B450F7747922676_OFFSET UNITYSDK_OFFSET(0x138715A0)
#define CLASS_1_38DAA2C710A78E2B_METHOD_1_98B369276E3E0E07_OFFSET UNITYSDK_OFFSET(0x13871900)
#define CLASS_1_38DAA2C710A78E2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13871270)

inline static constexpr unsigned int Class_1_38DAA2C710A78E2B_TypeDefinitionIndex = 67141;

class Class_1_38DAA2C710A78E2B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_38DAA2C710A78E2B_TypeDefinitionIndex)->GetStaticField(0x44310);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_38DAA2C710A78E2B__CCTOR_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_5312956B9D2DB899(::Foundation::IAssetPool* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::IAssetPool*, ::System::String*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_38DAA2C710A78E2B_METHOD_1_5312956B9D2DB899_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::RectTransform* Method_1_7B450F7747922676(::Foundation::IAssetPool* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::RectTransform*(*)(::Foundation::IAssetPool*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_38DAA2C710A78E2B_METHOD_1_7B450F7747922676_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_98B369276E3E0E07(::Foundation::IAssetPool* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::Foundation::IAssetPool*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_38DAA2C710A78E2B_METHOD_1_98B369276E3E0E07_OFFSET))(a1, a2);
	}
};
