#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace ZXing::OneD { class EANManufacturerOrgSupport; }
namespace ZXing::OneD { class UPCEANExtensionSupport; }

#define ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x17D39720)
#define ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET UNITYSDK_OFFSET(0x17D39500)
#define ZXING_ONED_UPCEANREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D3ECD0)
#define ZXING_ONED_UPCEANREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D38670)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANReader_TypeDefinitionIndex = 8598;

	class UPCEANReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_MIDDLE_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x7A40);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x7A48);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_AND_G_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x7A50);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_L_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x7A58);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_START_END_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x7A60);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x3C00);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UPCEANReader_TypeDefinitionIndex)->GetStaticField(0x3C04);
		}
		::ZXing::OneD::EANManufacturerOrgSupport* eanManSupport; // 0x10
		::System::Text::StringBuilder* decodeRowStringBuffer; // 0x18
		::ZXing::OneD::UPCEANExtensionSupport* extensionReader; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean checkStandardUPCEANChecksum(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_CHECKSTANDARDUPCEANCHECKSUM_OFFSET))(s);
		}

		static ::System::Nullable_1<::System::Int32> getStandardUPCEANChecksum(::System::String* s)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANREADER_GETSTANDARDUPCEANCHECKSUM_OFFSET))(s);
		}
	};
}
