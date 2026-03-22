#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace UnityEngine { class GameObject; }

#define CLASS_2_226E68D8C17922D2_METHOD_2_321ED79A39A0ED58_OFFSET UNITYSDK_OFFSET(0x64B8CA0)
#define CLASS_2_226E68D8C17922D2_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x64B8E40)
#define CLASS_2_226E68D8C17922D2__CTOR_OFFSET UNITYSDK_OFFSET(0x64B8C90)

inline static constexpr unsigned int Class_2_226E68D8C17922D2_TypeDefinitionIndex = 56134;

class Class_2_226E68D8C17922D2 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_226E68D8C17922D2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226E68D8C17922D2__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_321ED79A39A0ED58()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226E68D8C17922D2_METHOD_2_321ED79A39A0ED58_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226E68D8C17922D2_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}
};
