#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_BFE9AA95C61E0BA0_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB4DC910)
#define CLASS_2_BFE9AA95C61E0BA0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4DC9C0)
#define CLASS_2_BFE9AA95C61E0BA0__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4DC890)
#define CLASS_2_BFE9AA95C61E0BA0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4DC900)

inline static constexpr unsigned int Class_2_BFE9AA95C61E0BA0_TypeDefinitionIndex = 65654;

class Class_2_BFE9AA95C61E0BA0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xD; // 0x0
	::MoleMole::Battle::Entity* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BFE9AA95C61E0BA0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFE9AA95C61E0BA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFE9AA95C61E0BA0_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFE9AA95C61E0BA0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
