#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1747DAB17F36B4DF;
namespace UnityEngine { class Transform; }

#define CLASS_1_518DD0B4D75C745B_INIT_OFFSET UNITYSDK_OFFSET(0xB118D10)
#define CLASS_1_518DD0B4D75C745B_METHOD_1_E1005455DB785023_OFFSET UNITYSDK_OFFSET(0xB118DA0)
#define CLASS_1_518DD0B4D75C745B_ONSYNC_OFFSET UNITYSDK_OFFSET(0xB118580)
#define CLASS_1_518DD0B4D75C745B_POLISH_OFFSET UNITYSDK_OFFSET(0xB118BD0)
#define CLASS_1_518DD0B4D75C745B_RECYCLE_OFFSET UNITYSDK_OFFSET(0xB118C50)
#define CLASS_1_518DD0B4D75C745B__CTOR_OFFSET UNITYSDK_OFFSET(0xB118D90)

inline static constexpr unsigned int Class_1_518DD0B4D75C745B_TypeDefinitionIndex = 72620;

class Class_1_518DD0B4D75C745B : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_518DD0B4D75C745B__CTOR_OFFSET))(this);
	}

	::System::Void OnSync(::Class_1_1747DAB17F36B4DF* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_518DD0B4D75C745B_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_518DD0B4D75C745B_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_518DD0B4D75C745B_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_1747DAB17F36B4DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + CLASS_1_518DD0B4D75C745B_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_518DD0B4D75C745B* Method_1_E1005455DB785023(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_518DD0B4D75C745B*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_518DD0B4D75C745B_METHOD_1_E1005455DB785023_OFFSET))(a1, a2);
	}
};
