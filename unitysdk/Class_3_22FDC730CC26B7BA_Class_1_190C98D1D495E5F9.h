#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9_METHOD_1_B25367B7BC7F78F8_OFFSET UNITYSDK_OFFSET(0x60874B0)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9_METHOD_1_B97A4413A8136F2C_OFFSET UNITYSDK_OFFSET(0x60876D0)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9_METHOD_1_B9C605C393D636F5_OFFSET UNITYSDK_OFFSET(0x60875F0)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9__CTOR_OFFSET UNITYSDK_OFFSET(0x60874A0)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_Class_1_190C98D1D495E5F9_TypeDefinitionIndex = 48929;

class Class_3_22FDC730CC26B7BA_Class_1_190C98D1D495E5F9 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B25367B7BC7F78F8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9_METHOD_1_B25367B7BC7F78F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9C605C393D636F5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9_METHOD_1_B9C605C393D636F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B97A4413A8136F2C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_190C98D1D495E5F9_METHOD_1_B97A4413A8136F2C_OFFSET))(this, a1);
	}
};
