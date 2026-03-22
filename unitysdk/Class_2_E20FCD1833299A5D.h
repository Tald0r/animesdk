#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9EBF632273D0F552.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_E20FCD1833299A5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAC1080)
#define CLASS_2_E20FCD1833299A5D_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0xBAC0AE0)
#define CLASS_2_E20FCD1833299A5D_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xBAC0C90)
#define CLASS_2_E20FCD1833299A5D_METHOD_2_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xBAC1270)
#define CLASS_2_E20FCD1833299A5D_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xBAC1470)
#define CLASS_2_E20FCD1833299A5D__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC1260)

inline static constexpr unsigned int Class_2_E20FCD1833299A5D_TypeDefinitionIndex = 50775;

class Class_2_E20FCD1833299A5D : public ::Class_1_9EBF632273D0F552
{
public:
	::UnityEngine::Mesh* Field_2_0; // 0x48
	::UnityEngine::SkinnedMeshRenderer* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20FCD1833299A5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20FCD1833299A5D_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20FCD1833299A5D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20FCD1833299A5D_METHOD_2_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20FCD1833299A5D_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20FCD1833299A5D_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}
};
