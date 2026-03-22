#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OpaqueSoftEdgeRenderer_ObjectInfo;

#define OPAQUESOFTEDGERENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1837FF50)
#define OPAQUESOFTEDGERENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1837FF90)
#define OPAQUESOFTEDGERENDERER___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1837FFA0)

inline static constexpr unsigned int OpaqueSoftEdgeRenderer___c_TypeDefinitionIndex = 28142;

class OpaqueSoftEdgeRenderer___c : public ::System::Object
{
public:
	static ::OpaqueSoftEdgeRenderer___c** StaticGet___9()
	{
		return (::OpaqueSoftEdgeRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer___c_TypeDefinitionIndex)->GetStaticField(0x21690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__28_0(::OpaqueSoftEdgeRenderer_ObjectInfo* infoItem)
	{
		return ((::System::Void(*)(::PVOID, ::OpaqueSoftEdgeRenderer_ObjectInfo*))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER___C___CCTOR_B__28_0_OFFSET))(this, infoItem);
	}
};
