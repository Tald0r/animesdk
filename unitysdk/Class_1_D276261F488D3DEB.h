#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_D276261F488D3DEB_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9C21880)
#define CLASS_1_D276261F488D3DEB_METHOD_1_343259340A59888D_OFFSET UNITYSDK_OFFSET(0x9C215A0)
#define CLASS_1_D276261F488D3DEB_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x9C218C0)
#define CLASS_1_D276261F488D3DEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C21480)
#define CLASS_1_D276261F488D3DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x9C21440)

inline static constexpr unsigned int Class_1_D276261F488D3DEB_TypeDefinitionIndex = 64290;

class Class_1_D276261F488D3DEB : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_1; // 0x10
	::System::UInt32 Field_1_4; // 0x1C
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::System::Int32 Field_1_5; // 0x2C
	::System::UInt32 Field_1_0; // 0x30
	::System::UInt32 Field_1_3; // 0x34

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_343259340A59888D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_METHOD_1_343259340A59888D_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}
};
