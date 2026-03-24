#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect_DecalAreaData; }

#define MOLEMOLE_SERIALIZABLEDECALAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5401C0)

namespace MoleMole
{
	inline static constexpr unsigned int SerializableDecalAreaData_TypeDefinitionIndex = 37519;

	class SerializableDecalAreaData : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERIALIZABLEDECALAREADATA__CTOR_OFFSET))(this);
		}
	};
}
