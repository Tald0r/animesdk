#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_COLORHSV_EQUALS_OFFSET UNITYSDK_OFFSET(0x75A500)
#define MOLEMOLE_COLORHSV_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x75A510)
#define MOLEMOLE_COLORHSV_METHOD_2_0BF8162BD55D7016_OFFSET UNITYSDK_OFFSET(0x15E9C530)
#define MOLEMOLE_COLORHSV_METHOD_2_214DF8B0A83E434D_OFFSET UNITYSDK_OFFSET(0x15E9C5D0)
#define MOLEMOLE_COLORHSV_METHOD_2_4DB3384D86E03AF1_OFFSET UNITYSDK_OFFSET(0x15E9C7E0)
#define MOLEMOLE_COLORHSV_METHOD_2_6BBAD78ECFCF95B0_OFFSET UNITYSDK_OFFSET(0x15E9C090)
#define MOLEMOLE_COLORHSV_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x75A640)
#define MOLEMOLE_COLORHSV_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x75A5D0)
#define MOLEMOLE_COLORHSV_METHOD_2_9ACADD854D7C1F45_OFFSET UNITYSDK_OFFSET(0x15E9C350)
#define MOLEMOLE_COLORHSV_METHOD_2_BFE62A4F0DBF4601_OFFSET UNITYSDK_OFFSET(0x15E9C920)
#define MOLEMOLE_COLORHSV_METHOD_2_F44F79F49F8F2E0B_OFFSET UNITYSDK_OFFSET(0x15E9C1A0)
#define MOLEMOLE_COLORHSV__CTOR_1_OFFSET UNITYSDK_OFFSET(0x75A4D0)
#define MOLEMOLE_COLORHSV__CTOR_OFFSET UNITYSDK_OFFSET(0x42AD80)

namespace MoleMole
{
	inline static constexpr unsigned int ColorHSV_TypeDefinitionIndex = 39995;

	struct alignas(4) ColorHSV
	{
		::System::Single h; // 0x10
		::System::Single s; // 0x14
		::System::Single v; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV__CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV__CTOR_1_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::MoleMole::ColorHSV_Struct_2_1C0D1D514F9A1CCA Method_2_6BBAD78ECFCF95B0(::MoleMole::ColorHSV& a1, ::MoleMole::ColorHSV& a2)
		{
			return ((::MoleMole::ColorHSV_Struct_2_1C0D1D514F9A1CCA(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_6BBAD78ECFCF95B0_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		/*
		static ::MoleMole::ColorHSV Method_2_F44F79F49F8F2E0B(::MoleMole::ColorHSV& a1, ::MoleMole::ColorHSV_Struct_2_1C0D1D514F9A1CCA& a2)
		{
			return ((::MoleMole::ColorHSV(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV_Struct_2_1C0D1D514F9A1CCA&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_F44F79F49F8F2E0B_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Color Method_2_9ACADD854D7C1F45(::MoleMole::ColorHSV& a1)
		{
			return ((::UnityEngine::Color(*)(::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_9ACADD854D7C1F45_OFFSET))(a1);
		}
		*/

		static ::System::Boolean Method_2_0BF8162BD55D7016(::MoleMole::ColorHSV& a1, ::MoleMole::ColorHSV& a2)
		{
			return ((::System::Boolean(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_0BF8162BD55D7016_OFFSET))(a1, a2);
		}

		/*
		static ::MoleMole::ColorHSV Method_2_214DF8B0A83E434D(::UnityEngine::Color& a1)
		{
			return ((::MoleMole::ColorHSV(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_214DF8B0A83E434D_OFFSET))(a1);
		}
		*/

		static ::MoleMole::ColorHSV Method_2_4DB3384D86E03AF1(::MoleMole::ColorHSV& a1, ::MoleMole::ColorHSV& a2, ::System::Single a3)
		{
			return ((::MoleMole::ColorHSV(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_4DB3384D86E03AF1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_2_BFE62A4F0DBF4601(::MoleMole::ColorHSV& a1, ::MoleMole::ColorHSV& a2)
		{
			return ((::System::Boolean(*)(::MoleMole::ColorHSV&, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_METHOD_2_BFE62A4F0DBF4601_OFFSET))(a1, a2);
		}
	};
}
