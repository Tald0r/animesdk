#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1A3414978CEF17EE.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::HollowChessboard { class UVAnimSection; }

#define CLASS_3_55869C3D255F494E_METHOD_3_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x9C22430)
#define CLASS_3_55869C3D255F494E_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x9C22C80)
#define CLASS_3_55869C3D255F494E_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9C227C0)
#define CLASS_3_55869C3D255F494E_METHOD_3_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x9C228B0)
#define CLASS_3_55869C3D255F494E__CTOR_OFFSET UNITYSDK_OFFSET(0x9C22410)

inline static constexpr unsigned int Class_3_55869C3D255F494E_TypeDefinitionIndex = 78672;

class Class_3_55869C3D255F494E : public ::Class_2_1A3414978CEF17EE<::MoleMole::HollowChessboard::UVAnimSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::UVAnimSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*))((::PBYTE)hIl2Cpp + CLASS_3_55869C3D255F494E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55869C3D255F494E_METHOD_3_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55869C3D255F494E_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_55869C3D255F494E_METHOD_3_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55869C3D255F494E_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
