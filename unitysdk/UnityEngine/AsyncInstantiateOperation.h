#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASYNCINSTANTIATEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F34EC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncInstantiateOperation_TypeDefinitionIndex = 5319;

	class AsyncInstantiateOperation : public ::UnityEngine::AsyncOperation
	{
	public:
		::Il2CppArray<::UnityEngine::Object*>* m_Result; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCINSTANTIATEOPERATION__CTOR_OFFSET))(this);
		}
	};
}
