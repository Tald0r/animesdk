#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/AssemblyNameFlags.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Version; }
namespace System::Globalization { class CultureInfo; }
namespace System::IO { class Stream; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class Assembly_ResolveEventHolder; }
namespace System::Reflection { class ManifestResourceInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_0B60253B859A1F3E_OFFSET UNITYSDK_OFFSET(0x197A1640)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_0EFBF2C08DDE6EB9_OFFSET UNITYSDK_OFFSET(0x197A1E90)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_0F5FDD675C611E10_OFFSET UNITYSDK_OFFSET(0x197A1580)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x197A0E40)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x197A14C0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x197A0EE0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_1CAC6375102A9718_OFFSET UNITYSDK_OFFSET(0x197A1B50)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_1E00A6E91FB23975_OFFSET UNITYSDK_OFFSET(0x197A16A0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_27F7B55D2DEA317A_OFFSET UNITYSDK_OFFSET(0x197A0F00)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_2DCCA555E7940EF7_OFFSET UNITYSDK_OFFSET(0x197A1CF0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_3401F238AE952A98_OFFSET UNITYSDK_OFFSET(0x197A1FF0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_3EACA5870CDCB012_1_OFFSET UNITYSDK_OFFSET(0x197A15D0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0x197A15B0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_407BD41CCD67351F_1_OFFSET UNITYSDK_OFFSET(0x197A0E50)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_407BD41CCD67351F_OFFSET UNITYSDK_OFFSET(0x197A0E10)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_415F06FCB1F70AEA_OFFSET UNITYSDK_OFFSET(0x197A0F80)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_418002EA287B9CBA_OFFSET UNITYSDK_OFFSET(0x197A1650)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_49B6D54F51237F98_1_OFFSET UNITYSDK_OFFSET(0x197A1BF0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_49B6D54F51237F98_OFFSET UNITYSDK_OFFSET(0x197A1B70)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_4BB172234891928C_OFFSET UNITYSDK_OFFSET(0x197A1CB0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_4E92FFC4D97FB6CF_OFFSET UNITYSDK_OFFSET(0x197A2130)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_50BE66A0991E3BDC_OFFSET UNITYSDK_OFFSET(0x197A1C70)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_5644E5BC4897AB8D_OFFSET UNITYSDK_OFFSET(0x197A16C0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_5ABFCEEAFBE96FAF_OFFSET UNITYSDK_OFFSET(0x197A1B60)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_5EC5C449A551E563_OFFSET UNITYSDK_OFFSET(0x197A1D70)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_6148F4753B6872B6_OFFSET UNITYSDK_OFFSET(0x197A0F70)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_688C7CAB7C69FBA3_OFFSET UNITYSDK_OFFSET(0x197A14A0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_698C1EC8AAD23858_OFFSET UNITYSDK_OFFSET(0x197A1550)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_6C34CCA2890F606D_OFFSET UNITYSDK_OFFSET(0x197A14F0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_6C97DFC69C3B5DCA_OFFSET UNITYSDK_OFFSET(0x197A1520)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_75C9B71D82816CB9_OFFSET UNITYSDK_OFFSET(0x197A1E80)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_81F74904ECB949D7_OFFSET UNITYSDK_OFFSET(0x197A1F90)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_84976E6BC2BECBFA_OFFSET UNITYSDK_OFFSET(0x197A1E10)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_8EC1DA007282B63B_OFFSET UNITYSDK_OFFSET(0x197A20E0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_941062E508F0BE9E_1_OFFSET UNITYSDK_OFFSET(0x197A12D0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_941062E508F0BE9E_OFFSET UNITYSDK_OFFSET(0x197A2180)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_9A49CA8E83901574_1_OFFSET UNITYSDK_OFFSET(0x197A0E70)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_9A49CA8E83901574_OFFSET UNITYSDK_OFFSET(0x197A0E60)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_AB23E9AA42AAD23B_OFFSET UNITYSDK_OFFSET(0x197A1E00)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_AF5907C1B7B1B7AF_OFFSET UNITYSDK_OFFSET(0x197A15F0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_B12B136156DD1036_OFFSET UNITYSDK_OFFSET(0x197A0E30)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_B4C5A97F5D5A4EBC_OFFSET UNITYSDK_OFFSET(0x197A1610)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_B9AAF51E74E5A9B8_OFFSET UNITYSDK_OFFSET(0x197A1D90)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_C0B669C1C81DA065_OFFSET UNITYSDK_OFFSET(0x197A0F60)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_C4956DB9C5EDE438_OFFSET UNITYSDK_OFFSET(0x197A1710)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x197A1F80)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x197A0DD0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_CD3D584AB8895C79_OFFSET UNITYSDK_OFFSET(0x197A0F90)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_D2D7B48E5CB284C7_OFFSET UNITYSDK_OFFSET(0x197A0F50)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x197A0EB0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x197A0E80)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_DC5EDEC1A4CAE943_OFFSET UNITYSDK_OFFSET(0x197A1E60)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x197A1F70)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F3DA7B1D8559FF40_OFFSET UNITYSDK_OFFSET(0x197A1D00)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F67A3F86868DE8FE_OFFSET UNITYSDK_OFFSET(0x197A2090)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F6875811E5227469_OFFSET UNITYSDK_OFFSET(0x197A0E20)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_FB0B10AC01759A95_OFFSET UNITYSDK_OFFSET(0x197A1720)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_FE34BD117ADE5F23_OFFSET UNITYSDK_OFFSET(0x197A1350)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_TypeDefinitionIndex = 566;

	class Assembly : public ::System::Object
	{
	public:
		::System::IntPtr Field_1_0; // 0x10
		::System::Reflection::Assembly_ResolveEventHolder* Field_1_1; // 0x18
		::System::Object* Field_1_2; // 0x20
		::System::Object* Field_1_3; // 0x28
		::System::Object* Field_1_4; // 0x30
		::System::Object* Field_1_5; // 0x38
		::System::Object* Field_1_6; // 0x40
		::System::Object* Field_1_7; // 0x48
		::System::Boolean Field_1_8; // 0x50
		::System::String* Field_1_9; // 0x58

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::String* Method_1_407BD41CCD67351F(::System::Boolean escaped)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_407BD41CCD67351F_OFFSET))(this, escaped);
		}

		::System::String* Method_1_F6875811E5227469()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F6875811E5227469_OFFSET))(this);
		}

		::System::String* Method_1_B12B136156DD1036()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_B12B136156DD1036_OFFSET))(this);
		}

		static ::System::String* Method_1_126AB3935214AA22()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_126AB3935214AA22_OFFSET))();
		}

		::System::String* Method_1_407BD41CCD67351F_1(::System::Boolean escaped)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_407BD41CCD67351F_1_OFFSET))(this, escaped);
		}

		::System::String* Method_1_9A49CA8E83901574()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_9A49CA8E83901574_OFFSET))(this);
		}

		::System::String* Method_1_9A49CA8E83901574_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_9A49CA8E83901574_1_OFFSET))(this);
		}

		::System::String* Method_1_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_1_27F7B55D2DEA317A(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_27F7B55D2DEA317A_OFFSET))(this, info, context);
		}

		::System::Boolean Method_1_D2D7B48E5CB284C7(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_D2D7B48E5CB284C7_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_1_C0B669C1C81DA065(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_C0B669C1C81DA065_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_1_6148F4753B6872B6(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_6148F4753B6872B6_OFFSET))(this, attributeType, inherit);
		}

		::System::IntPtr Method_1_415F06FCB1F70AEA(::System::String* name, ::System::Int32& size, ::System::Reflection::Module*& module)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Reflection::Module*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_415F06FCB1F70AEA_OFFSET))(this, name, size, module);
		}

		::System::IO::Stream* Method_1_CD3D584AB8895C79(::System::String* name)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_CD3D584AB8895C79_OFFSET))(this, name);
		}

		::System::IO::Stream* Method_1_FE34BD117ADE5F23(::System::Type* type, ::System::String* name, ::System::Boolean skipSecurityCheck, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_FE34BD117ADE5F23_OFFSET))(this, type, name, skipSecurityCheck, stackMark);
		}

		::System::IO::Stream* Method_1_688C7CAB7C69FBA3(::System::String* name, ::System::Threading::StackCrawlMark& stackMark, ::System::Boolean skipSecurityCheck)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_688C7CAB7C69FBA3_OFFSET))(this, name, stackMark, skipSecurityCheck);
		}

		::System::String* Method_1_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_128774387667156B_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Method_1_6C34CCA2890F606D()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_6C34CCA2890F606D_OFFSET))(this);
		}

		::System::Version* Method_1_6C97DFC69C3B5DCA()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_6C97DFC69C3B5DCA_OFFSET))(this);
		}

		::System::Reflection::AssemblyNameFlags Method_1_698C1EC8AAD23858()
		{
			return ((::System::Reflection::AssemblyNameFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_698C1EC8AAD23858_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_1_0F5FDD675C611E10(::System::Boolean exportedOnly)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_0F5FDD675C611E10_OFFSET))(this, exportedOnly);
		}

		::Il2CppArray<::System::Type*>* Method_1_3EACA5870CDCB012()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_3EACA5870CDCB012_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_1_3EACA5870CDCB012_1()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_3EACA5870CDCB012_1_OFFSET))(this);
		}

		::System::Type* Method_1_AF5907C1B7B1B7AF(::System::String* name, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_AF5907C1B7B1B7AF_OFFSET))(this, name, throwOnError);
		}

		::System::Type* Method_1_B4C5A97F5D5A4EBC(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_B4C5A97F5D5A4EBC_OFFSET))(this, name);
		}

		::System::Type* Method_1_0B60253B859A1F3E(::System::Reflection::Module* module, ::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Module*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_0B60253B859A1F3E_OFFSET))(this, module, name, throwOnError, ignoreCase);
		}

		::System::Reflection::AssemblyName* Method_1_418002EA287B9CBA(::System::Boolean copiedName)
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_418002EA287B9CBA_OFFSET))(this, copiedName);
		}

		::System::Reflection::AssemblyName* Method_1_1E00A6E91FB23975()
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_1E00A6E91FB23975_OFFSET))(this);
		}

		::System::String* Method_1_DA1BF2C227DC3D86_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_DA1BF2C227DC3D86_1_OFFSET))(this);
		}

		static ::System::Reflection::Assembly* Method_1_5644E5BC4897AB8D(::System::Type* type)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_5644E5BC4897AB8D_OFFSET))(type);
		}

		static ::System::Reflection::Assembly* Method_1_C4956DB9C5EDE438()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_C4956DB9C5EDE438_OFFSET))();
		}

		::System::Reflection::RuntimeAssembly* Method_1_FB0B10AC01759A95(::System::String* name, ::System::Globalization::CultureInfo* culture, ::System::Version* version, ::System::Boolean throwOnFileNotFound, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Version*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_FB0B10AC01759A95_OFFSET))(this, name, culture, version, throwOnFileNotFound, stackMark);
		}

		static ::System::Reflection::Assembly* Method_1_5ABFCEEAFBE96FAF(::System::String* assemblyFile, ::System::Boolean refonly)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_5ABFCEEAFBE96FAF_OFFSET))(assemblyFile, refonly);
		}

		static ::System::Reflection::Assembly* Method_1_1CAC6375102A9718(::System::String* assemblyFile)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_1CAC6375102A9718_OFFSET))(assemblyFile);
		}

		static ::System::Reflection::Assembly* Method_1_49B6D54F51237F98(::System::String* assemblyString)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_49B6D54F51237F98_OFFSET))(assemblyString);
		}

		static ::System::Reflection::Assembly* Method_1_49B6D54F51237F98_1(::System::String* assemblyString)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_49B6D54F51237F98_1_OFFSET))(assemblyString);
		}

		static ::System::Reflection::Assembly* Method_1_50BE66A0991E3BDC(::System::String* partialName)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_50BE66A0991E3BDC_OFFSET))(partialName);
		}

		static ::System::Reflection::Assembly* Method_1_2DCCA555E7940EF7(::System::String* name, ::System::Security::Policy::Evidence* e)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_2DCCA555E7940EF7_OFFSET))(name, e);
		}

		static ::System::Reflection::Assembly* Method_1_4BB172234891928C(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_4BB172234891928C_OFFSET))(partialName, securityEvidence);
		}

		static ::System::Reflection::Assembly* Method_1_F3DA7B1D8559FF40(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence, ::System::Boolean oldBehavior)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F3DA7B1D8559FF40_OFFSET))(partialName, securityEvidence, oldBehavior);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_1_5EC5C449A551E563()
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_5EC5C449A551E563_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_1_B9AAF51E74E5A9B8()
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_B9AAF51E74E5A9B8_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_1_AB23E9AA42AAD23B()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_AB23E9AA42AAD23B_OFFSET))(this);
		}

		static ::System::Reflection::Assembly* Method_1_84976E6BC2BECBFA()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_84976E6BC2BECBFA_OFFSET))();
		}

		static ::System::Reflection::Assembly* Method_1_DC5EDEC1A4CAE943()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_DC5EDEC1A4CAE943_OFFSET))();
		}

		::System::Boolean Method_1_75C9B71D82816CB9(::System::String* name, ::System::Reflection::ManifestResourceInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Reflection::ManifestResourceInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_75C9B71D82816CB9_OFFSET))(this, name, info);
		}

		::System::Reflection::ManifestResourceInfo* Method_1_0EFBF2C08DDE6EB9(::System::String* resourceName)
		{
			return ((::System::Reflection::ManifestResourceInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_0EFBF2C08DDE6EB9_OFFSET))(this, resourceName);
		}

		::System::Boolean Method_1_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean Method_1_81F74904ECB949D7(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_81F74904ECB949D7_OFFSET))(this, o);
		}

		static ::System::Exception* Method_1_3401F238AE952A98()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_3401F238AE952A98_OFFSET))();
		}

		::System::Type* Method_1_F67A3F86868DE8FE(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_F67A3F86868DE8FE_OFFSET))(this, name, throwOnError, ignoreCase);
		}

		::System::Reflection::Module* Method_1_8EC1DA007282B63B(::System::String* name)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_8EC1DA007282B63B_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_1_4E92FFC4D97FB6CF(::System::Boolean getResourceModules)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_4E92FFC4D97FB6CF_OFFSET))(this, getResourceModules);
		}

		static ::System::Boolean Method_1_941062E508F0BE9E(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_941062E508F0BE9E_OFFSET))(left, right);
		}

		static ::System::Boolean Method_1_941062E508F0BE9E_1(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_941062E508F0BE9E_1_OFFSET))(left, right);
		}
	};
}
