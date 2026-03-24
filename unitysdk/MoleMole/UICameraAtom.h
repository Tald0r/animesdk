#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UICAMERAATOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BE240)
#define MOLEMOLE_UICAMERAATOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BE210)
#define MOLEMOLE_UICAMERAATOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BE2E0)
#define MOLEMOLE_UICAMERAATOM_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xC0B1770)
#define MOLEMOLE_UICAMERAATOM_GET_FOV_OFFSET UNITYSDK_OFFSET(0x2F60A0)
#define MOLEMOLE_UICAMERAATOM_GET_POS_OFFSET UNITYSDK_OFFSET(0x33F200)
#define MOLEMOLE_UICAMERAATOM_GET_ROT_OFFSET UNITYSDK_OFFSET(0x394D30)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_1_OFFSET UNITYSDK_OFFSET(0xC0B1F30)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_OFFSET UNITYSDK_OFFSET(0xC0B1E80)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_27AF3C8987EB39AF_OFFSET UNITYSDK_OFFSET(0xC0B2B90)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_4321AFA5981896E4_OFFSET UNITYSDK_OFFSET(0x3BE3E0)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_6695159C43613292_OFFSET UNITYSDK_OFFSET(0xC0B2590)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_ACFC02CB143DEFAA_OFFSET UNITYSDK_OFFSET(0xC0B1FE0)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_B2FBAC43FA08C2C9_OFFSET UNITYSDK_OFFSET(0x3BE520)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_E7C75C4FE7D6D7C8_OFFSET UNITYSDK_OFFSET(0x3BE4D0)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x3BE550)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x3BE3A0)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_F7514505158903D4_OFFSET UNITYSDK_OFFSET(0xC0B2880)
#define MOLEMOLE_UICAMERAATOM_SET_FOV_OFFSET UNITYSDK_OFFSET(0x2F60B0)
#define MOLEMOLE_UICAMERAATOM_SET_POS_OFFSET UNITYSDK_OFFSET(0x33F2F0)
#define MOLEMOLE_UICAMERAATOM_SET_ROT_OFFSET UNITYSDK_OFFSET(0x3BE200)
#define MOLEMOLE_UICAMERAATOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BE390)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraAtom_TypeDefinitionIndex = 54569;

	struct alignas(4) UICameraAtom
	{
		::System::Single _Fov_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Pos_k__BackingField; // 0x14
		::UnityEngine::Quaternion _Rot_k__BackingField; // 0x20

		::System::Single get_Fov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_FOV_OFFSET))(this);
		}

		::System::Void set_Fov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_FOV_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Pos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_POS_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rot()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_ROT_OFFSET))(this);
		}

		::System::Void set_Rot(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_ROT_OFFSET))(this, a1);
		}

		static ::MoleMole::UICameraAtom get_Default()
		{
			return ((::MoleMole::UICameraAtom(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean Equals(::MoleMole::UICameraAtom a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_TOSTRING_OFFSET))(this);
		}

		::System::Int32 Method_2_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
		}

		::System::Boolean Method_2_4321AFA5981896E4(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_4321AFA5981896E4_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_2_128A3A066D9C08E3(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::System::Boolean(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_128A3A066D9C08E3_1(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::System::Boolean(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_1_OFFSET))(a1, a2);
		}

		static ::MoleMole::UICameraAtom Method_2_ACFC02CB143DEFAA(::MoleMole::UICameraAtom a1, ::System::Single a2)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_ACFC02CB143DEFAA_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_E7C75C4FE7D6D7C8(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_E7C75C4FE7D6D7C8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_B2FBAC43FA08C2C9(::MoleMole::UICameraAtom a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_B2FBAC43FA08C2C9_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::UICameraAtom Method_2_6695159C43613292(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_6695159C43613292_OFFSET))(a1, a2);
		}

		static ::MoleMole::UICameraAtom Method_2_F7514505158903D4(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_F7514505158903D4_OFFSET))(a1, a2);
		}

		::System::String* Method_2_F24A112B56A2E4B4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_F24A112B56A2E4B4_OFFSET))(this);
		}

		static ::MoleMole::UICameraAtom Method_2_27AF3C8987EB39AF(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2, ::System::Single a3)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_27AF3C8987EB39AF_OFFSET))(a1, a2, a3);
		}
	};
}
