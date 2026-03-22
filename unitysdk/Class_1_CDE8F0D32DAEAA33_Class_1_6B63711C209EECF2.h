#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2_METHOD_1_160F8FA9265D2088_OFFSET UNITYSDK_OFFSET(0x67503F0)
#define CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2_METHOD_1_2F61DC308D42F30F_OFFSET UNITYSDK_OFFSET(0x67503B0)
#define CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2_METHOD_1_D1B9990C19F05A12_OFFSET UNITYSDK_OFFSET(0x6750560)
#define CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2__CTOR_OFFSET UNITYSDK_OFFSET(0x67503A0)

inline static constexpr unsigned int Class_1_CDE8F0D32DAEAA33_Class_1_6B63711C209EECF2_TypeDefinitionIndex = 59760;

class Class_1_CDE8F0D32DAEAA33_Class_1_6B63711C209EECF2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F61DC308D42F30F(::UnityEngine::Keyframe a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2_METHOD_1_2F61DC308D42F30F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_160F8FA9265D2088(::UnityEngine::Keyframe a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2_METHOD_1_160F8FA9265D2088_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D1B9990C19F05A12(::UnityEngine::Keyframe a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_CDE8F0D32DAEAA33_CLASS_1_6B63711C209EECF2_METHOD_1_D1B9990C19F05A12_OFFSET))(this, a1);
	}
};
