#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_ITFREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D3A210)
#define ZXING_ONED_ITFREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3A1B0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int ITFReader_TypeDefinitionIndex = 8584;

	class ITFReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x7A70);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DEFAULT_ALLOWED_LENGTHS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x7A78);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN_REVERSED()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x7A80);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_START_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x7A88);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x3C10);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x3C14);
		}
		::System::Int32 narrowLineWidth; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_ITFREADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ITFREADER__CCTOR_OFFSET))();
		}
	};
}
