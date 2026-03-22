#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_81BCC5A7D87EA043_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0xB1E4BF0)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0xB1E3C70)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xB1E4810)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_66B933BDC0D4D2FD_OFFSET UNITYSDK_OFFSET(0xB1E43F0)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xB1E40C0)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_A100BA020C5319CF_OFFSET UNITYSDK_OFFSET(0xB1E4370)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xB1E3C00)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB1E48E0)
#define CLASS_1_81BCC5A7D87EA043_METHOD_1_FE74D24B3528D3F8_OFFSET UNITYSDK_OFFSET(0xB1E4920)
#define CLASS_1_81BCC5A7D87EA043__CTOR_OFFSET UNITYSDK_OFFSET(0xB1E3BC0)

inline static constexpr unsigned int Class_1_81BCC5A7D87EA043_TypeDefinitionIndex = 61566;

class Class_1_81BCC5A7D87EA043 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_81BCC5A7D87EA043_TypeDefinitionIndex)->GetStaticField(0xC760);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_1_66B933BDC0D4D2FD(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_66B933BDC0D4D2FD_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	::System::Void Method_1_FE74D24B3528D3F8(::System::Int32 a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_FE74D24B3528D3F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_A100BA020C5319CF()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043_METHOD_1_A100BA020C5319CF_OFFSET))(this);
	}
};
