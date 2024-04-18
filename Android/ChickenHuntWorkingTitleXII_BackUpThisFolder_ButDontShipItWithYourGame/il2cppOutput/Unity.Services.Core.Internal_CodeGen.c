#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Services.Wire.Internal.IChannel::add_MessageReceived(System.Action`1<System.String>)
// 0x00000002 System.Void Unity.Services.Wire.Internal.IChannel::remove_MessageReceived(System.Action`1<System.String>)
// 0x00000003 System.Void Unity.Services.Wire.Internal.IChannel::add_BinaryMessageReceived(System.Action`1<System.Byte[]>)
// 0x00000004 System.Void Unity.Services.Wire.Internal.IChannel::remove_BinaryMessageReceived(System.Action`1<System.Byte[]>)
// 0x00000005 System.Void Unity.Services.Wire.Internal.IChannel::add_KickReceived(System.Action)
// 0x00000006 System.Void Unity.Services.Wire.Internal.IChannel::remove_KickReceived(System.Action)
// 0x00000007 System.Void Unity.Services.Wire.Internal.IChannel::add_NewStateReceived(System.Action`1<Unity.Services.Wire.Internal.SubscriptionState>)
// 0x00000008 System.Void Unity.Services.Wire.Internal.IChannel::remove_NewStateReceived(System.Action`1<Unity.Services.Wire.Internal.SubscriptionState>)
// 0x00000009 System.Void Unity.Services.Wire.Internal.IChannel::add_ErrorReceived(System.Action`1<System.String>)
// 0x0000000A System.Void Unity.Services.Wire.Internal.IChannel::remove_ErrorReceived(System.Action`1<System.String>)
// 0x0000000B System.Threading.Tasks.Task Unity.Services.Wire.Internal.IChannel::SubscribeAsync()
// 0x0000000C System.Threading.Tasks.Task Unity.Services.Wire.Internal.IChannel::UnsubscribeAsync()
// 0x0000000D System.Threading.Tasks.Task`1<Unity.Services.Wire.Internal.ChannelToken> Unity.Services.Wire.Internal.IChannelTokenProvider::GetTokenAsync()
// 0x0000000E Unity.Services.Wire.Internal.IChannel Unity.Services.Wire.Internal.IWire::CreateChannel(Unity.Services.Wire.Internal.IChannelTokenProvider)
// 0x0000000F System.Void Unity.Services.Vivox.Internal.IVivox::RegisterTokenProvider(Unity.Services.Vivox.Internal.IVivoxTokenProviderInternal)
// 0x00000010 System.Threading.Tasks.Task`1<System.String> Unity.Services.Vivox.Internal.IVivoxTokenProviderInternal::GetTokenAsync(System.String,System.Nullable`1<System.TimeSpan>,System.String,System.String,System.String,System.String,System.String)
// 0x00000011 System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Unity.Services.Qos.Internal.QosResult>> Unity.Services.Qos.Internal.IQosResults::GetSortedQosResultsAsync(System.String,System.Collections.Generic.IList`1<System.String>)
// 0x00000012 System.String Unity.Services.Authentication.Internal.IAccessToken::get_AccessToken()
// 0x00000013 System.Void Unity.Services.Authentication.Internal.IAccessTokenObserver::add_AccessTokenChanged(System.Action`1<System.String>)
// 0x00000014 System.Void Unity.Services.Authentication.Internal.IAccessTokenObserver::remove_AccessTokenChanged(System.Action`1<System.String>)
// 0x00000015 System.String Unity.Services.Authentication.Internal.IEnvironmentId::get_EnvironmentId()
// 0x00000016 System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId()
// 0x00000017 System.Void Unity.Services.Authentication.Internal.IPlayerId::add_PlayerIdChanged(System.Action`1<System.String>)
// 0x00000018 System.Void Unity.Services.Authentication.Internal.IPlayerId::remove_PlayerIdChanged(System.Action`1<System.String>)
// 0x00000019 System.Boolean Unity.Services.Core.Threading.Internal.IUnityThreadUtils::get_IsRunningOnUnityThread()
// 0x0000001A System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.IUnityThreadUtils::PostAsync(System.Action)
// 0x0000001B System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.IUnityThreadUtils::PostAsync(System.Action`1<System.Object>,System.Object)
// 0x0000001C System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.IUnityThreadUtils::PostAsync(System.Func`1<T>)
// 0x0000001D System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.IUnityThreadUtils::PostAsync(System.Func`2<System.Object,T>,System.Object)
// 0x0000001E System.Void Unity.Services.Core.Threading.Internal.IUnityThreadUtils::Send(System.Action)
// 0x0000001F System.Void Unity.Services.Core.Threading.Internal.IUnityThreadUtils::Send(System.Action`1<System.Object>,System.Object)
// 0x00000020 T Unity.Services.Core.Threading.Internal.IUnityThreadUtils::Send(System.Func`1<T>)
// 0x00000021 T Unity.Services.Core.Threading.Internal.IUnityThreadUtils::Send(System.Func`2<System.Object,T>,System.Object)
// 0x00000022 System.Void Unity.Services.Core.Telemetry.Internal.IDiagnostics::SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000023 System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory> Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider::CreateDiagnosticsComponents()
// 0x00000024 System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider::GetSerializedProjectConfigurationAsync()
// 0x00000025 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory::get_CommonTags()
// 0x00000026 Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory::Create(System.String)
// 0x00000027 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendGaugeMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000028 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000029 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000002A System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.IMetricsFactory::get_CommonTags()
// 0x0000002B Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.IMetricsFactory::Create(System.String)
// 0x0000002C System.Int64 Unity.Services.Core.Scheduler.Internal.IActionScheduler::ScheduleAction(System.Action,System.Double)
// 0x0000002D System.Void Unity.Services.Core.Scheduler.Internal.IActionScheduler::CancelAction(System.Int64)
// 0x0000002E System.Void Unity.Services.Core.Networking.Internal.HttpRequest::.ctor()
extern void HttpRequest__ctor_mFA4C4CD9671444C5892575B80746E0772BFBD2E2 (void);
// 0x0000002F System.Void Unity.Services.Core.Networking.Internal.HttpRequest::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Byte[])
extern void HttpRequest__ctor_mC4489FDDBE8347EC6991F8FE82845193230AD16A (void);
// 0x00000030 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetMethod(System.String)
extern void HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432 (void);
// 0x00000031 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetUrl(System.String)
extern void HttpRequest_SetUrl_m3D7DDD4113C5FDDEFA35499033A48BDCBCDF0F1A (void);
// 0x00000032 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetHeader(System.String,System.String)
extern void HttpRequest_SetHeader_m2DC1503D7C51FA7E0D93ABD170EE43720114F4AB (void);
// 0x00000033 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void HttpRequest_SetHeaders_mE3D7A9F8099C9FF9857674E646C3B0BD10A842A5 (void);
// 0x00000034 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetBody(System.Byte[])
extern void HttpRequest_SetBody_mE1ABCAE172B4BCDFDF9B9EA0A518C46997E8133D (void);
// 0x00000035 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetOptions(Unity.Services.Core.Networking.Internal.HttpOptions)
extern void HttpRequest_SetOptions_m1271D089E1B03979885B59141F1763C26BC48FE7 (void);
// 0x00000036 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetRedirectLimit(System.Int32)
extern void HttpRequest_SetRedirectLimit_mE0252B498EFF4A1AA52DD11AAFFA2F2A2FEE3D37 (void);
// 0x00000037 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetTimeOutInSeconds(System.Int32)
extern void HttpRequest_SetTimeOutInSeconds_mCC75A3869DA6ECB09515FD6BDD6F17C47C70A908 (void);
// 0x00000038 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsGet(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsGet_m28DF3ED7F818274BF1AC977B17CC0C525E354AFD (void);
// 0x00000039 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPost(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsPost_mF1A934B205A1884F4981E920D31BE19A05B8FA3C (void);
// 0x0000003A Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPut(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsPut_m890B18C8C5429D6E34E3FBF2F5057E2DDD26E6C9 (void);
// 0x0000003B Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsDelete(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsDelete_m5AD1D8F86BD40371874367FC549FB552A905C53F (void);
// 0x0000003C Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPatch(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsPatch_m4B291F0F4D58A20CF0200F26DE209AD888834512 (void);
// 0x0000003D Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsHead(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsHead_mEFED7EF8E375D169ED994C2AF8AA72CDC363B165 (void);
// 0x0000003E Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsConnect(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsConnect_mA31E141BC108F548E27E0A004B61B6A24AB64053 (void);
// 0x0000003F Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsOptions(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsOptions_m746C02B3B06FCFBEA9680115FFAC4330970AE279 (void);
// 0x00000040 Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsTrace(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpRequestExtensions_AsTrace_m1409607795138437F7FB4EEE5ADB2D716A587065 (void);
// 0x00000041 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetRequest(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void HttpResponse_SetRequest_m5FAFFF426085600C4B924AF89876CFA229423982 (void);
// 0x00000042 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetRequest(Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest)
extern void HttpResponse_SetRequest_m157F40648D8A89D39A4FCA78A34C12844BD2972B (void);
// 0x00000043 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetHeader(System.String,System.String)
extern void HttpResponse_SetHeader_mA8207E139EC699A78CCEAFE41099E106859739EF (void);
// 0x00000044 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void HttpResponse_SetHeaders_m9787E73858C566DD4D3B2106CBF714E3BCEB1823 (void);
// 0x00000045 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetData(System.Byte[])
extern void HttpResponse_SetData_m7C392B3890056E0405626462183B05F1A24F24BD (void);
// 0x00000046 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetStatusCode(System.Int64)
extern void HttpResponse_SetStatusCode_m53FC74E65C0256A49B51F7F4ACB265958C08166E (void);
// 0x00000047 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetErrorMessage(System.String)
extern void HttpResponse_SetErrorMessage_m41C88451AEBB8A9727621F4E6F6C9D63EEF75AFE (void);
// 0x00000048 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetIsHttpError(System.Boolean)
extern void HttpResponse_SetIsHttpError_m42D96A0FA33493639D8D312AB9B0E080CDD7AD91 (void);
// 0x00000049 Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetIsNetworkError(System.Boolean)
extern void HttpResponse_SetIsNetworkError_mBE51289A5E2DCCB412D3F15245A2DDD4109AFA9B (void);
// 0x0000004A System.Void Unity.Services.Core.Networking.Internal.HttpResponse::.ctor()
extern void HttpResponse__ctor_mFF0EA6082417016169BE870EE83437BA173172B4 (void);
// 0x0000004B System.String Unity.Services.Core.Networking.Internal.IHttpClient::GetBaseUrlFor(System.String)
// 0x0000004C Unity.Services.Core.Networking.Internal.HttpOptions Unity.Services.Core.Networking.Internal.IHttpClient::GetDefaultOptionsFor(System.String)
// 0x0000004D Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.IHttpClient::CreateRequestForService(System.String,System.String)
// 0x0000004E Unity.Services.Core.Internal.IAsyncOperation`1<Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse> Unity.Services.Core.Networking.Internal.IHttpClient::Send(Unity.Services.Core.Networking.Internal.HttpRequest)
// 0x0000004F System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::.ctor(Unity.Services.Core.Networking.Internal.HttpRequest)
extern void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B (void);
// 0x00000050 System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Method()
extern void ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C (void);
// 0x00000051 System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Url()
extern void ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216 (void);
// 0x00000052 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Headers()
extern void ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3 (void);
// 0x00000053 System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Body()
extern void ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58 (void);
// 0x00000054 System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::.ctor(Unity.Services.Core.Networking.Internal.HttpResponse)
extern void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C (void);
// 0x00000055 Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Request()
extern void ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01 (void);
// 0x00000056 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Headers()
extern void ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61 (void);
// 0x00000057 System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Data()
extern void ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC (void);
// 0x00000058 System.Int64 Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_StatusCode()
extern void ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013 (void);
// 0x00000059 System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_ErrorMessage()
extern void ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4 (void);
// 0x0000005A System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsHttpError()
extern void ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89 (void);
// 0x0000005B System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsNetworkError()
extern void ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068 (void);
// 0x0000005C System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current()
// 0x0000005D System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier()
// 0x0000005E System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId()
// 0x0000005F System.String Unity.Services.Core.Configuration.Internal.IExternalUserId::get_UserId()
// 0x00000060 System.Void Unity.Services.Core.Configuration.Internal.IExternalUserId::add_UserIdChanged(System.Action`1<System.String>)
// 0x00000061 System.Void Unity.Services.Core.Configuration.Internal.IExternalUserId::remove_UserIdChanged(System.Action`1<System.String>)
// 0x00000062 System.Boolean Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetBool(System.String,System.Boolean)
// 0x00000063 System.Int32 Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetInt(System.String,System.Int32)
// 0x00000064 System.Single Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetFloat(System.String,System.Single)
// 0x00000065 System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String)
// 0x00000066 System.Void Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent::Record(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Int32,System.String)
// 0x00000067 System.String Unity.Services.Core.Analytics.Internal.IAnalyticsUserId::GetAnalyticsUserId()
// 0x00000068 System.Boolean Unity.Services.Core.Internal.AsyncOperation::get_IsDone()
extern void AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0 (void);
// 0x00000069 System.Void Unity.Services.Core.Internal.AsyncOperation::set_IsDone(System.Boolean)
extern void AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443 (void);
// 0x0000006A Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation::get_Status()
extern void AsyncOperation_get_Status_m0A936D453514234140366F6C2318ECA656CF3A87 (void);
// 0x0000006B System.Void Unity.Services.Core.Internal.AsyncOperation::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
extern void AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC (void);
// 0x0000006C System.Void Unity.Services.Core.Internal.AsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
extern void AsyncOperation_add_Completed_m3BF706D0128F8660347D12C9C4F4DCBB580EC67F (void);
// 0x0000006D System.Void Unity.Services.Core.Internal.AsyncOperation::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
extern void AsyncOperation_remove_Completed_mE76C24A21D1799C3979DBA0823F181CFEFCFB228 (void);
// 0x0000006E System.Exception Unity.Services.Core.Internal.AsyncOperation::get_Exception()
extern void AsyncOperation_get_Exception_mA4C2316EBBAF7FC9E73CD1225E4D42E20F8663A9 (void);
// 0x0000006F System.Void Unity.Services.Core.Internal.AsyncOperation::set_Exception(System.Exception)
extern void AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244 (void);
// 0x00000070 System.Void Unity.Services.Core.Internal.AsyncOperation::SetInProgress()
extern void AsyncOperation_SetInProgress_mF9F046353697ECEB9B2FD83E3193E8C050BCC860 (void);
// 0x00000071 System.Void Unity.Services.Core.Internal.AsyncOperation::Succeed()
extern void AsyncOperation_Succeed_mE56F6B7EC1E7A92BD743C0B4E8D4EC85C1F07A28 (void);
// 0x00000072 System.Void Unity.Services.Core.Internal.AsyncOperation::Fail(System.Exception)
extern void AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF (void);
// 0x00000073 System.Void Unity.Services.Core.Internal.AsyncOperation::Cancel()
extern void AsyncOperation_Cancel_m32C14294FB4C72F2F3B260796F47D6401B2F4045 (void);
// 0x00000074 System.Boolean Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.MoveNext()
extern void AsyncOperation_System_Collections_IEnumerator_MoveNext_m596CB807AE95B2B961DB02CED835209527DAB777 (void);
// 0x00000075 System.Void Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.Reset()
extern void AsyncOperation_System_Collections_IEnumerator_Reset_m6A6B5E00A6EC7F7286CFF63F2802A2C9C83426AE (void);
// 0x00000076 System.Object Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.get_Current()
extern void AsyncOperation_System_Collections_IEnumerator_get_Current_mE64353F2F4CB9E9CBD92B52FC1D56F96C6B93314 (void);
// 0x00000077 System.Void Unity.Services.Core.Internal.AsyncOperation::.ctor()
extern void AsyncOperation__ctor_m39B9682C2896CAA23CAC25FCF9D902C19EBF11DE (void);
// 0x00000078 System.Boolean Unity.Services.Core.Internal.AsyncOperation`1::get_IsDone()
// 0x00000079 System.Void Unity.Services.Core.Internal.AsyncOperation`1::set_IsDone(System.Boolean)
// 0x0000007A Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation`1::get_Status()
// 0x0000007B System.Void Unity.Services.Core.Internal.AsyncOperation`1::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
// 0x0000007C System.Void Unity.Services.Core.Internal.AsyncOperation`1::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation`1<T>>)
// 0x0000007D System.Void Unity.Services.Core.Internal.AsyncOperation`1::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation`1<T>>)
// 0x0000007E System.Exception Unity.Services.Core.Internal.AsyncOperation`1::get_Exception()
// 0x0000007F System.Void Unity.Services.Core.Internal.AsyncOperation`1::set_Exception(System.Exception)
// 0x00000080 T Unity.Services.Core.Internal.AsyncOperation`1::get_Result()
// 0x00000081 System.Void Unity.Services.Core.Internal.AsyncOperation`1::set_Result(T)
// 0x00000082 System.Void Unity.Services.Core.Internal.AsyncOperation`1::SetInProgress()
// 0x00000083 System.Void Unity.Services.Core.Internal.AsyncOperation`1::Succeed(T)
// 0x00000084 System.Void Unity.Services.Core.Internal.AsyncOperation`1::Fail(System.Exception)
// 0x00000085 System.Void Unity.Services.Core.Internal.AsyncOperation`1::Cancel()
// 0x00000086 System.Boolean Unity.Services.Core.Internal.AsyncOperation`1::System.Collections.IEnumerator.MoveNext()
// 0x00000087 System.Void Unity.Services.Core.Internal.AsyncOperation`1::System.Collections.IEnumerator.Reset()
// 0x00000088 System.Object Unity.Services.Core.Internal.AsyncOperation`1::System.Collections.IEnumerator.get_Current()
// 0x00000089 System.Void Unity.Services.Core.Internal.AsyncOperation`1::.ctor()
// 0x0000008A System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::.ctor(Unity.Services.Core.Internal.IAsyncOperation)
extern void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668 (void);
// 0x0000008B System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::OnCompleted(System.Action)
extern void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0 (void);
// 0x0000008C System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::UnsafeOnCompleted(System.Action)
extern void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957 (void);
// 0x0000008D System.Boolean Unity.Services.Core.Internal.AsyncOperationAwaiter::get_IsCompleted()
extern void AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4 (void);
// 0x0000008E System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::GetResult()
extern void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504 (void);
// 0x0000008F System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA (void);
// 0x00000090 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
extern void U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430 (void);
// 0x00000091 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D (void);
// 0x00000092 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::<UnsafeOnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
extern void U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1 (void);
// 0x00000093 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter`1::.ctor(Unity.Services.Core.Internal.IAsyncOperation`1<T>)
// 0x00000094 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter`1::OnCompleted(System.Action)
// 0x00000095 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter`1::UnsafeOnCompleted(System.Action)
// 0x00000096 System.Boolean Unity.Services.Core.Internal.AsyncOperationAwaiter`1::get_IsCompleted()
// 0x00000097 T Unity.Services.Core.Internal.AsyncOperationAwaiter`1::GetResult()
// 0x00000098 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter`1/<>c__DisplayClass2_0::.ctor()
// 0x00000099 System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter`1/<>c__DisplayClass2_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation`1<T>)
// 0x0000009A System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter`1/<>c__DisplayClass3_0::.ctor()
// 0x0000009B System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter`1/<>c__DisplayClass3_0::<UnsafeOnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation`1<T>)
// 0x0000009C System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_keepWaiting()
extern void AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F (void);
// 0x0000009D System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted()
// 0x0000009E System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsDone()
extern void AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8 (void);
// 0x0000009F Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperationBase::get_Status()
// 0x000000A0 System.Exception Unity.Services.Core.Internal.AsyncOperationBase::get_Exception()
// 0x000000A1 System.Void Unity.Services.Core.Internal.AsyncOperationBase::GetResult()
// 0x000000A2 Unity.Services.Core.Internal.AsyncOperationBase Unity.Services.Core.Internal.AsyncOperationBase::GetAwaiter()
// 0x000000A3 System.Void Unity.Services.Core.Internal.AsyncOperationBase::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
extern void AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C (void);
// 0x000000A4 System.Void Unity.Services.Core.Internal.AsyncOperationBase::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
extern void AsyncOperationBase_remove_Completed_m275A690292CDEB367604BFCB1642DBFDFFF32625 (void);
// 0x000000A5 System.Void Unity.Services.Core.Internal.AsyncOperationBase::DidComplete()
extern void AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948 (void);
// 0x000000A6 System.Void Unity.Services.Core.Internal.AsyncOperationBase::OnCompleted(System.Action)
extern void AsyncOperationBase_OnCompleted_m857D67EBD531576BF37FB74499C781666DC27F88 (void);
// 0x000000A7 System.Void Unity.Services.Core.Internal.AsyncOperationBase::.ctor()
extern void AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314 (void);
// 0x000000A8 System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1 (void);
// 0x000000A9 System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
extern void U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C (void);
// 0x000000AA System.Boolean Unity.Services.Core.Internal.AsyncOperationBase`1::get_keepWaiting()
// 0x000000AB System.Boolean Unity.Services.Core.Internal.AsyncOperationBase`1::get_IsCompleted()
// 0x000000AC System.Boolean Unity.Services.Core.Internal.AsyncOperationBase`1::get_IsDone()
// 0x000000AD Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperationBase`1::get_Status()
// 0x000000AE System.Exception Unity.Services.Core.Internal.AsyncOperationBase`1::get_Exception()
// 0x000000AF T Unity.Services.Core.Internal.AsyncOperationBase`1::get_Result()
// 0x000000B0 T Unity.Services.Core.Internal.AsyncOperationBase`1::GetResult()
// 0x000000B1 Unity.Services.Core.Internal.AsyncOperationBase`1<T> Unity.Services.Core.Internal.AsyncOperationBase`1::GetAwaiter()
// 0x000000B2 System.Void Unity.Services.Core.Internal.AsyncOperationBase`1::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation`1<T>>)
// 0x000000B3 System.Void Unity.Services.Core.Internal.AsyncOperationBase`1::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation`1<T>>)
// 0x000000B4 System.Void Unity.Services.Core.Internal.AsyncOperationBase`1::DidComplete()
// 0x000000B5 System.Void Unity.Services.Core.Internal.AsyncOperationBase`1::OnCompleted(System.Action)
// 0x000000B6 System.Void Unity.Services.Core.Internal.AsyncOperationBase`1::.ctor()
// 0x000000B7 System.Void Unity.Services.Core.Internal.AsyncOperationBase`1/<>c__DisplayClass19_0::.ctor()
// 0x000000B8 System.Void Unity.Services.Core.Internal.AsyncOperationBase`1/<>c__DisplayClass19_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation`1<T>)
// 0x000000B9 Unity.Services.Core.Internal.AsyncOperationAwaiter Unity.Services.Core.Internal.AsyncOperationExtensions::GetAwaiter(Unity.Services.Core.Internal.IAsyncOperation)
extern void AsyncOperationExtensions_GetAwaiter_m2C028ED897351C7B1B61E677F62AEB9DDBB2FE17 (void);
// 0x000000BA System.Threading.Tasks.Task Unity.Services.Core.Internal.AsyncOperationExtensions::AsTask(Unity.Services.Core.Internal.IAsyncOperation)
extern void AsyncOperationExtensions_AsTask_m2EDCCEA7ABE216E3D5BDE1AABA6B8A7BDF82A4A5 (void);
// 0x000000BB Unity.Services.Core.Internal.AsyncOperationAwaiter`1<T> Unity.Services.Core.Internal.AsyncOperationExtensions::GetAwaiter(Unity.Services.Core.Internal.IAsyncOperation`1<T>)
// 0x000000BC System.Threading.Tasks.Task`1<T> Unity.Services.Core.Internal.AsyncOperationExtensions::AsTask(Unity.Services.Core.Internal.IAsyncOperation`1<T>)
// 0x000000BD System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54 (void);
// 0x000000BE System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::<AsTask>g__CompleteTask|0(Unity.Services.Core.Internal.IAsyncOperation)
extern void U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A (void);
// 0x000000BF System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass3_0`1::.ctor()
// 0x000000C0 System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass3_0`1::<AsTask>g__CompleteTask|0(Unity.Services.Core.Internal.IAsyncOperation`1<T>)
// 0x000000C1 System.Boolean Unity.Services.Core.Internal.IAsyncOperation::get_IsDone()
// 0x000000C2 Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status()
// 0x000000C3 System.Void Unity.Services.Core.Internal.IAsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
// 0x000000C4 System.Void Unity.Services.Core.Internal.IAsyncOperation::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
// 0x000000C5 System.Exception Unity.Services.Core.Internal.IAsyncOperation::get_Exception()
// 0x000000C6 System.Boolean Unity.Services.Core.Internal.IAsyncOperation`1::get_IsDone()
// 0x000000C7 Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation`1::get_Status()
// 0x000000C8 System.Void Unity.Services.Core.Internal.IAsyncOperation`1::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation`1<T>>)
// 0x000000C9 System.Void Unity.Services.Core.Internal.IAsyncOperation`1::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation`1<T>>)
// 0x000000CA System.Exception Unity.Services.Core.Internal.IAsyncOperation`1::get_Exception()
// 0x000000CB T Unity.Services.Core.Internal.IAsyncOperation`1::get_Result()
// 0x000000CC System.Boolean Unity.Services.Core.Internal.IAsyncOperationAwaiter::get_IsCompleted()
// 0x000000CD System.Void Unity.Services.Core.Internal.IAsyncOperationAwaiter::GetResult()
// 0x000000CE System.Boolean Unity.Services.Core.Internal.IAsyncOperationAwaiter`1::get_IsCompleted()
// 0x000000CF T Unity.Services.Core.Internal.IAsyncOperationAwaiter`1::GetResult()
// 0x000000D0 System.Boolean Unity.Services.Core.Internal.TaskAsyncOperation::get_IsCompleted()
extern void TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A (void);
// 0x000000D1 Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.TaskAsyncOperation::get_Status()
extern void TaskAsyncOperation_get_Status_mE71FE39E4040745C8991A9B2D9013485F2F570B2 (void);
// 0x000000D2 System.Exception Unity.Services.Core.Internal.TaskAsyncOperation::get_Exception()
extern void TaskAsyncOperation_get_Exception_m0DE2EB1BFD825B1EC8DF097F19BEAB5A97A8476D (void);
// 0x000000D3 System.Void Unity.Services.Core.Internal.TaskAsyncOperation::GetResult()
extern void TaskAsyncOperation_GetResult_mF09BB788C2E02361476796AE889E2FA9E88541C6 (void);
// 0x000000D4 Unity.Services.Core.Internal.AsyncOperationBase Unity.Services.Core.Internal.TaskAsyncOperation::GetAwaiter()
extern void TaskAsyncOperation_GetAwaiter_mAFF3CA07A0A4DAFBB96D2D11C5A5085A4988521F (void);
// 0x000000D5 System.Void Unity.Services.Core.Internal.TaskAsyncOperation::.ctor(System.Threading.Tasks.Task)
extern void TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46 (void);
// 0x000000D6 Unity.Services.Core.Internal.TaskAsyncOperation Unity.Services.Core.Internal.TaskAsyncOperation::Run(System.Action)
extern void TaskAsyncOperation_Run_mC16E6AD6990BFBC0CDD771A0CA5BCF976C91067F (void);
// 0x000000D7 System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
extern void TaskAsyncOperation_SetScheduler_m9332E7895ECAB965F2235125568C07C577113A0C (void);
// 0x000000D8 System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.cctor()
extern void U3CU3Ec__cctor_m2DEEAD91E0DBC47856131A14B3B258C5088236B4 (void);
// 0x000000D9 System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.ctor()
extern void U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20 (void);
// 0x000000DA System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::<.ctor>b__10_0(System.Threading.Tasks.Task,System.Object)
extern void U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF (void);
// 0x000000DB System.Boolean Unity.Services.Core.Internal.TaskAsyncOperation`1::get_IsCompleted()
// 0x000000DC T Unity.Services.Core.Internal.TaskAsyncOperation`1::get_Result()
// 0x000000DD T Unity.Services.Core.Internal.TaskAsyncOperation`1::GetResult()
// 0x000000DE Unity.Services.Core.Internal.AsyncOperationBase`1<T> Unity.Services.Core.Internal.TaskAsyncOperation`1::GetAwaiter()
// 0x000000DF Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.TaskAsyncOperation`1::get_Status()
// 0x000000E0 System.Exception Unity.Services.Core.Internal.TaskAsyncOperation`1::get_Exception()
// 0x000000E1 System.Void Unity.Services.Core.Internal.TaskAsyncOperation`1::.ctor(System.Threading.Tasks.Task`1<T>)
// 0x000000E2 Unity.Services.Core.Internal.TaskAsyncOperation`1<T> Unity.Services.Core.Internal.TaskAsyncOperation`1::Run(System.Func`1<T>)
// 0x000000E3 System.Void Unity.Services.Core.Internal.TaskAsyncOperation`1/<>c::.cctor()
// 0x000000E4 System.Void Unity.Services.Core.Internal.TaskAsyncOperation`1/<>c::.ctor()
// 0x000000E5 System.Void Unity.Services.Core.Internal.TaskAsyncOperation`1/<>c::<.ctor>b__11_0(System.Threading.Tasks.Task`1<T>,System.Object)
// 0x000000E6 System.Void Unity.Services.Core.Internal.CoreLogger::Log(System.Object)
extern void CoreLogger_Log_mF35C18BCEE8C07B2E3DC5FD82151F964D5FA0194 (void);
// 0x000000E7 System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
extern void CoreLogger_LogWarning_m3EC29259EEF1CEA23B40D00075D3030A789F43C0 (void);
// 0x000000E8 System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
extern void CoreLogger_LogError_m60BDFED5C2144A408C9641D048F9A7C5141B8195 (void);
// 0x000000E9 System.Void Unity.Services.Core.Internal.CoreLogger::LogException(System.Exception)
extern void CoreLogger_LogException_mB3CF4A6EFC19F55590FA92A35024E4CC1224D582 (void);
// 0x000000EA System.Void Unity.Services.Core.Internal.CoreLogger::LogAssertion(System.Object)
extern void CoreLogger_LogAssertion_mE6F3A1E0F0B4588A6420524D5CC94E42A8CA2215 (void);
// 0x000000EB System.Void Unity.Services.Core.Internal.CoreLogger::LogVerbose(System.Object)
extern void CoreLogger_LogVerbose_m7E3463F8BDFECC42C657C52D7F710BE4402EF28F (void);
// 0x000000EC System.Void Unity.Services.Core.Internal.CoreLogger::LogTelemetry(System.Object)
extern void CoreLogger_LogTelemetry_m384C868390F252B4021FB8B39F9908B73E647029 (void);
// 0x000000ED System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
extern void CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2 (void);
// 0x000000EE System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor(System.String)
extern void CircularDependencyException__ctor_m3D8DEB3AB4C12EFA05800264FF203F8DBB8F5D62 (void);
// 0x000000EF System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
extern void ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20 (void);
// 0x000000F0 System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor()
extern void ComponentRegistry__ctor_m97BABC74F8A6513A5E39250E6CA5C891B6C03F53 (void);
// 0x000000F1 System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A (void);
// 0x000000F2 System.Void Unity.Services.Core.Internal.ComponentRegistry::RegisterServiceComponent(TComponent)
// 0x000000F3 TComponent Unity.Services.Core.Internal.ComponentRegistry::GetServiceComponent()
// 0x000000F4 System.Boolean Unity.Services.Core.Internal.ComponentRegistry::TryGetServiceComponent(TComponent&)
// 0x000000F5 System.Boolean Unity.Services.Core.Internal.ComponentRegistry::IsComponentTypeRegistered(System.Int32)
extern void ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8 (void);
// 0x000000F6 System.Void Unity.Services.Core.Internal.ComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void ComponentRegistry_ResetProvidedComponents_m58F818C1716DBB973137A543DE880D24E2F25908 (void);
// 0x000000F7 System.Void Unity.Services.Core.Internal.IComponentRegistry::RegisterServiceComponent(TComponent)
// 0x000000F8 TComponent Unity.Services.Core.Internal.IComponentRegistry::GetServiceComponent()
// 0x000000F9 System.Boolean Unity.Services.Core.Internal.IComponentRegistry::TryGetServiceComponent(TComponent&)
// 0x000000FA System.Void Unity.Services.Core.Internal.IComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
// 0x000000FB Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.LockedComponentRegistry::get_Registry()
extern void LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941 (void);
// 0x000000FC System.Void Unity.Services.Core.Internal.LockedComponentRegistry::.ctor(Unity.Services.Core.Internal.IComponentRegistry)
extern void LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1 (void);
// 0x000000FD System.Void Unity.Services.Core.Internal.LockedComponentRegistry::RegisterServiceComponent(TComponent)
// 0x000000FE TComponent Unity.Services.Core.Internal.LockedComponentRegistry::GetServiceComponent()
// 0x000000FF System.Boolean Unity.Services.Core.Internal.LockedComponentRegistry::TryGetServiceComponent(TComponent&)
// 0x00000100 System.Void Unity.Services.Core.Internal.LockedComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D (void);
// 0x00000101 Unity.Services.Core.Internal.CorePackageRegistry Unity.Services.Core.Internal.CorePackageRegistry::get_Instance()
extern void CorePackageRegistry_get_Instance_mA3CA7F1AA607A12DAC42AC645554119E00F93264 (void);
// 0x00000102 System.Void Unity.Services.Core.Internal.CorePackageRegistry::set_Instance(Unity.Services.Core.Internal.CorePackageRegistry)
extern void CorePackageRegistry_set_Instance_mD0C942798E1841FC837EA519E0D94C7F233E7A09 (void);
// 0x00000103 Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CorePackageRegistry::get_Registry()
extern void CorePackageRegistry_get_Registry_m6E57F342E4F5F394B7453CC81CD3512805909FE5 (void);
// 0x00000104 System.Void Unity.Services.Core.Internal.CorePackageRegistry::set_Registry(Unity.Services.Core.Internal.IPackageRegistry)
extern void CorePackageRegistry_set_Registry_m582970875E935248441CC95D6B1FBC4939461F1A (void);
// 0x00000105 System.Void Unity.Services.Core.Internal.CorePackageRegistry::.ctor()
extern void CorePackageRegistry__ctor_mE38657AA57ECBFFD6FB3550D8BE9D75BB987EB4D (void);
// 0x00000106 System.Void Unity.Services.Core.Internal.CorePackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
extern void CorePackageRegistry__ctor_m695CCE0984D8B978D9028EEA866536BA140AC42A (void);
// 0x00000107 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CorePackageRegistry::Register(TPackage)
// 0x00000108 System.Void Unity.Services.Core.Internal.CorePackageRegistry::Lock()
extern void CorePackageRegistry_Lock_m4C3243DA139AB0398555E608BFB5AFEBF2BFE2A1 (void);
// 0x00000109 System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
extern void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1 (void);
// 0x0000010A Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn()
// 0x0000010B Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn()
// 0x0000010C Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent()
// 0x0000010D Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
extern void CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2 (void);
// 0x0000010E System.Void Unity.Services.Core.Internal.CoreRegistry::set_Instance(Unity.Services.Core.Internal.CoreRegistry)
extern void CoreRegistry_set_Instance_mF131533D65A3CDAE3C7DCB969369DC33AE15CADA (void);
// 0x0000010F System.String Unity.Services.Core.Internal.CoreRegistry::get_InstanceId()
extern void CoreRegistry_get_InstanceId_m38E05C64DA268C1E6DC5DC075E477E27800ECB30 (void);
// 0x00000110 Unity.Services.Core.ServicesType Unity.Services.Core.Internal.CoreRegistry::get_Type()
extern void CoreRegistry_get_Type_m4AF53950970280B903127A44FAD55A3D299732C0 (void);
// 0x00000111 System.Void Unity.Services.Core.Internal.CoreRegistry::set_Type(Unity.Services.Core.ServicesType)
extern void CoreRegistry_set_Type_m3A381E447C027551608E66912DBD90EB6A1260A5 (void);
// 0x00000112 Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.CoreRegistry::get_Options()
extern void CoreRegistry_get_Options_m38BF83E7ADFB48E1F4D00E33287EE500159E4B1A (void);
// 0x00000113 System.Void Unity.Services.Core.Internal.CoreRegistry::set_Options(Unity.Services.Core.InitializationOptions)
extern void CoreRegistry_set_Options_m9024B165E3C573BF8EE213B71ADAEADB3FB5EBB3 (void);
// 0x00000114 Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
extern void CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063 (void);
// 0x00000115 System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
extern void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B (void);
// 0x00000116 Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
extern void CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13 (void);
// 0x00000117 System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
extern void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E (void);
// 0x00000118 Unity.Services.Core.Internal.IServiceRegistry Unity.Services.Core.Internal.CoreRegistry::get_ServiceRegistry()
extern void CoreRegistry_get_ServiceRegistry_mCFC68D980F88843196B8B5A4B4A9BB92F2511E66 (void);
// 0x00000119 System.Void Unity.Services.Core.Internal.CoreRegistry::set_ServiceRegistry(Unity.Services.Core.Internal.IServiceRegistry)
extern void CoreRegistry_set_ServiceRegistry_m5CF74C0F9167102E8822DC0D31886F3E8C3ED62C (void);
// 0x0000011A System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
extern void CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314 (void);
// 0x0000011B System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry,Unity.Services.Core.ServicesType,System.String)
extern void CoreRegistry__ctor_mBA92BC251BFE18FBCD0333205685EE7CC74985AF (void);
// 0x0000011C Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage(TPackage)
// 0x0000011D System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent(TComponent)
// 0x0000011E TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent()
// 0x0000011F System.Boolean Unity.Services.Core.Internal.CoreRegistry::TryGetServiceComponent(TComponent&)
// 0x00000120 System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterService(T)
// 0x00000121 T Unity.Services.Core.Internal.CoreRegistry::GetService()
// 0x00000122 System.Void Unity.Services.Core.Internal.CoreRegistry::LockComponentRegistration()
extern void CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC (void);
// 0x00000123 System.Void Unity.Services.Core.Internal.CoreRegistry::LockServiceRegistration()
extern void CoreRegistry_LockServiceRegistration_m2C5B772568C138E931320D68C8D70C616DA2EED0 (void);
// 0x00000124 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,System.Collections.Generic.List`1<System.Int32>)
extern void CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156 (void);
// 0x00000125 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistryAsync()
extern void CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8 (void);
// 0x00000126 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9 (void);
// 0x00000127 System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__TryInitializePackageAsync|0(Unity.Services.Core.Internal.IInitializablePackage)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327 (void);
// 0x00000128 Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__GetPackageAt|1(System.Int32)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016 (void);
// 0x00000129 System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__InitializePackageAsync|2(Unity.Services.Core.Internal.IInitializablePackage)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2_mC20491738C6723C6B9764C2DB7CDC60E5DE58D07 (void);
// 0x0000012A System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__Fail|3()
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C3_m8321C5FB6E23B64251E2A4538955AB5EA21C0930 (void);
// 0x0000012B System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::MoveNext()
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52 (void);
// 0x0000012C System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7 (void);
// 0x0000012D System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__InitializePackageAsync|2>d::MoveNext()
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD (void);
// 0x0000012E System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__InitializePackageAsync|2>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74 (void);
// 0x0000012F System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::MoveNext()
extern void U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23 (void);
// 0x00000130 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2 (void);
// 0x00000131 System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
extern void DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C (void);
// 0x00000132 System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928 (void);
// 0x00000133 System.Void Unity.Services.Core.Internal.DependencyTreeSortFailedException::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
extern void DependencyTreeSortFailedException__ctor_m4AD28E1834D38336C77C1CCDA271244B84EA97ED (void);
// 0x00000134 System.Void Unity.Services.Core.Internal.DependencyTreeSortFailedException::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
extern void DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B (void);
// 0x00000135 System.String Unity.Services.Core.Internal.DependencyTreeSortFailedException::CreateExceptionMessage(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
extern void DependencyTreeSortFailedException_CreateExceptionMessage_m2E6122FBE998BA2615E6E185FB348F25BFE4296C (void);
// 0x00000136 System.String Unity.Services.Core.Internal.DependencyTreeExtensions::ToJson(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
extern void DependencyTreeExtensions_ToJson_m2C4230FE2EEDFBF054DFC22A1CFEDCA12AAE9BA2 (void);
// 0x00000137 System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsOptional(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_IsOptional_mC8A55692071BF2CE146B2CA4C157B9918B8FFC29 (void);
// 0x00000138 System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsProvided(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_IsProvided_mC13FBEF113FC24A5B0002B5AAB7D0528BD3FAF25 (void);
// 0x00000139 Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetPackageJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_GetPackageJObject_mA85F231105D1D260FA97291DE00C984735E9AD0F (void);
// 0x0000013A Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_GetComponentJObject_mEC551883BBF8AAE3AC983172AAA9E688ECE2076C (void);
// 0x0000013B System.String Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentIdentifier(Unity.Services.Core.Internal.IServiceComponent)
extern void DependencyTreeExtensions_GetComponentIdentifier_m8C966E32C965BC493052B10ED3301EC1946CE1E8 (void);
// 0x0000013C System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7 (void);
// 0x0000013D System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
extern void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831 (void);
// 0x0000013E System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183 (void);
// 0x0000013F System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B (void);
// 0x00000140 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C (void);
// 0x00000141 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D (void);
// 0x00000142 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
extern void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31 (void);
// 0x00000143 System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653 (void);
// 0x00000144 System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634 (void);
// 0x00000145 System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
extern void DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF (void);
// 0x00000146 System.Int32 Unity.Services.Core.Internal.HashException::get_Hash()
extern void HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023 (void);
// 0x00000147 System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32)
extern void HashException__ctor_m5D99D5AC9A02DE153D481AA8BE5DF9D41FA0348E (void);
// 0x00000148 System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String)
extern void HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B (void);
// 0x00000149 System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String,System.Exception)
extern void HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655 (void);
// 0x0000014A System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32)
extern void DependencyTreePackageHashException__ctor_mE0682581DB0B7C459509731055254FB1DD746A18 (void);
// 0x0000014B System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String)
extern void DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33 (void);
// 0x0000014C System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String,System.Exception)
extern void DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7 (void);
// 0x0000014D System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32)
extern void DependencyTreeComponentHashException__ctor_m552C601C7E53E8ADCAC67541D9D4F2DA75EDFD26 (void);
// 0x0000014E System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32,System.String)
extern void DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4 (void);
// 0x0000014F System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32,System.String,System.Exception)
extern void DependencyTreeComponentHashException__ctor_mD0DF4D7831FECB6F2372624B0C6870D6D8D04FBE (void);
// 0x00000150 System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackage::Initialize(Unity.Services.Core.Internal.CoreRegistry)
// 0x00000151 System.Void Unity.Services.Core.Internal.IInitializablePackageV2::Register(Unity.Services.Core.Internal.CorePackageRegistry)
// 0x00000152 System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackageV2::InitializeInstanceAsync(Unity.Services.Core.Internal.CoreRegistry)
// 0x00000153 System.Type Unity.Services.Core.Internal.MissingComponent::get_IntendedType()
extern void MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59 (void);
// 0x00000154 System.Void Unity.Services.Core.Internal.MissingComponent::.ctor(System.Type)
extern void MissingComponent__ctor_m2D280CE147B980C7656E897F5F237EB2A50A517B (void);
// 0x00000155 System.Void Unity.Services.Core.Internal.PackageInitializationInfo::.ctor()
extern void PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4 (void);
// 0x00000156 Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree()
// 0x00000157 System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
// 0x00000158 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.IPackageRegistry::RegisterPackage(TPackage)
// 0x00000159 System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterDependency(System.Int32)
// 0x0000015A System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterOptionalDependency(System.Int32)
// 0x0000015B System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterProvision(System.Int32)
// 0x0000015C Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
extern void LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A (void);
// 0x0000015D System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
extern void LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927 (void);
// 0x0000015E Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.LockedPackageRegistry::get_Tree()
extern void LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D (void);
// 0x0000015F System.Void Unity.Services.Core.Internal.LockedPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
extern void LockedPackageRegistry_set_Tree_m51DD9195FEE8F0E7366F915B039495A797BC1C11 (void);
// 0x00000160 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.LockedPackageRegistry::RegisterPackage(TPackage)
// 0x00000161 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterDependency(System.Int32)
// 0x00000162 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterOptionalDependency(System.Int32)
// 0x00000163 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterProvision(System.Int32)
// 0x00000164 Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
extern void PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B (void);
// 0x00000165 System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
extern void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C (void);
// 0x00000166 System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
extern void PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330 (void);
// 0x00000167 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.PackageRegistry::RegisterPackage(TPackage)
// 0x00000168 System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterDependency(System.Int32)
// 0x00000169 System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterOptionalDependency(System.Int32)
// 0x0000016A System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterProvision(System.Int32)
// 0x0000016B System.Void Unity.Services.Core.Internal.PackageRegistry::AddComponentDependencyToPackage(System.Int32,System.Int32)
extern void PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812 (void);
// 0x0000016C System.Void Unity.Services.Core.Internal.IServiceRegistry::RegisterService(T)
// 0x0000016D T Unity.Services.Core.Internal.IServiceRegistry::GetService()
// 0x0000016E Unity.Services.Core.Internal.IServiceRegistry Unity.Services.Core.Internal.LockedServiceRegistry::get_Registry()
extern void LockedServiceRegistry_get_Registry_m93C03C683E10EE6D6AF297CE3EF36BFAF281DD8A (void);
// 0x0000016F System.Void Unity.Services.Core.Internal.LockedServiceRegistry::.ctor(Unity.Services.Core.Internal.IServiceRegistry)
extern void LockedServiceRegistry__ctor_m2467137C25EE7BAE21C292BB5EEDA1B2D27CD68A (void);
// 0x00000170 System.Void Unity.Services.Core.Internal.LockedServiceRegistry::RegisterService(T)
// 0x00000171 T Unity.Services.Core.Internal.LockedServiceRegistry::GetService()
// 0x00000172 System.Collections.Generic.Dictionary`2<System.Int32,System.Object> Unity.Services.Core.Internal.ServiceRegistry::get_ServiceTypeHashToInstance()
extern void ServiceRegistry_get_ServiceTypeHashToInstance_m43D7C38487F32188AFBA41102852B8DA8F17B452 (void);
// 0x00000173 System.Void Unity.Services.Core.Internal.ServiceRegistry::.ctor()
extern void ServiceRegistry__ctor_m0C9FF2F4ED6D103192DFFADB0174890826DCC18E (void);
// 0x00000174 System.Void Unity.Services.Core.Internal.ServiceRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,System.Object>)
extern void ServiceRegistry__ctor_m1C4A09701C4E7DAB73FFA75529F2B79D02BA4005 (void);
// 0x00000175 System.Void Unity.Services.Core.Internal.ServiceRegistry::RegisterService(T)
// 0x00000176 T Unity.Services.Core.Internal.ServiceRegistry::GetService()
// 0x00000177 Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Instance()
extern void CoreDiagnostics_get_Instance_m3874F9B1EE28D4E45BF8AE2C4CE9020A1710E5A8 (void);
// 0x00000178 System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Instance(Unity.Services.Core.Internal.CoreDiagnostics)
extern void CoreDiagnostics_set_Instance_m99771D0C00FF14763109900C8B374C226EFFC93C (void);
// 0x00000179 System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Internal.CoreDiagnostics::get_CoreTags()
extern void CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20 (void);
// 0x0000017A Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider Unity.Services.Core.Internal.CoreDiagnostics::get_DiagnosticsComponentProvider()
extern void CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7 (void);
// 0x0000017B System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_DiagnosticsComponentProvider(Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider)
extern void CoreDiagnostics_set_DiagnosticsComponentProvider_m4980F8DAE6FC5015B00AB0A083327BDAB8F8A5B3 (void);
// 0x0000017C Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Diagnostics()
extern void CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48 (void);
// 0x0000017D System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Diagnostics(Unity.Services.Core.Telemetry.Internal.IDiagnostics)
extern void CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C (void);
// 0x0000017E System.Void Unity.Services.Core.Internal.CoreDiagnostics::SetProjectConfiguration(System.String)
extern void CoreDiagnostics_SetProjectConfiguration_mA70A7004CE8C36FA8E0F17E5529F666D536CF987 (void);
// 0x0000017F System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCircularDependencyDiagnostics(System.Exception)
extern void CoreDiagnostics_SendCircularDependencyDiagnostics_m9A32DD117AC9C01104B3B3EA17A886C46F6EA858 (void);
// 0x00000180 System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCorePackageInitDiagnostics(System.Exception)
extern void CoreDiagnostics_SendCorePackageInitDiagnostics_m70FFDD2D365654029B3C75CCDE12A384ED7C1397 (void);
// 0x00000181 System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendOperateServicesInitDiagnostics(System.Exception)
extern void CoreDiagnostics_SendOperateServicesInitDiagnostics_m01E3A52B731604F17403740C31004A83104E8461 (void);
// 0x00000182 System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreDiagnostics::SendCoreDiagnosticsAsync(System.String,System.Exception)
extern void CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7 (void);
// 0x00000183 System.Void Unity.Services.Core.Internal.CoreDiagnostics::OnSendFailed(System.Threading.Tasks.Task)
extern void CoreDiagnostics_OnSendFailed_m0258B860B57443CE673BDEEC071F918DA045CDE6 (void);
// 0x00000184 System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics> Unity.Services.Core.Internal.CoreDiagnostics::GetOrCreateDiagnosticsAsync()
extern void CoreDiagnostics_GetOrCreateDiagnosticsAsync_mA2C6BC3077D3EF4104FDE4C9BA26D4B8E640CFE2 (void);
// 0x00000185 System.Void Unity.Services.Core.Internal.CoreDiagnostics::.ctor()
extern void CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330 (void);
// 0x00000186 System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::MoveNext()
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0 (void);
// 0x00000187 System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838 (void);
// 0x00000188 System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::MoveNext()
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC (void);
// 0x00000189 System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839 (void);
// 0x0000018A Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.CoreMetrics::get_Instance()
extern void CoreMetrics_get_Instance_m6E3FFB3ED86A6FA6C1DD1D087E0F3837DF3A8E4F (void);
// 0x0000018B System.Void Unity.Services.Core.Internal.CoreMetrics::set_Instance(Unity.Services.Core.Internal.CoreMetrics)
extern void CoreMetrics_set_Instance_m94F9AC73074F522AAF6F2DD9FBAD506A6516783C (void);
// 0x0000018C Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Internal.CoreMetrics::get_Metrics()
extern void CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329 (void);
// 0x0000018D System.Void Unity.Services.Core.Internal.CoreMetrics::set_Metrics(Unity.Services.Core.Telemetry.Internal.IMetrics)
extern void CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB (void);
// 0x0000018E System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics> Unity.Services.Core.Internal.CoreMetrics::get_AllPackageMetrics()
extern void CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0 (void);
// 0x0000018F System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitSuccessMetric()
extern void CoreMetrics_SendAllPackagesInitSuccessMetric_m6A0C4AD97DA5F22FCA1723F91096E1AC63400AC1 (void);
// 0x00000190 System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitTimeMetric(System.Double)
extern void CoreMetrics_SendAllPackagesInitTimeMetric_m28BB6D84801BEFC36F21D22D148C2C53C19456C6 (void);
// 0x00000191 System.Void Unity.Services.Core.Internal.CoreMetrics::SendInitTimeMetricForPackage(System.Type,System.Double)
extern void CoreMetrics_SendInitTimeMetricForPackage_m20190AC644BB9982E2833904EFE519C088EA566F (void);
// 0x00000192 System.Void Unity.Services.Core.Internal.CoreMetrics::Initialize(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Telemetry.Internal.IMetricsFactory,System.Type)
extern void CoreMetrics_Initialize_m7F3B9703FBA1138C36F4C3FE4838443B772B9AE7 (void);
// 0x00000193 System.Void Unity.Services.Core.Internal.CoreMetrics::FindAndCacheAllPackageMetrics(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
extern void CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2 (void);
// 0x00000194 System.Void Unity.Services.Core.Internal.CoreMetrics::.ctor()
extern void CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2 (void);
// 0x00000195 System.Void Unity.Services.Core.Internal.UnityServicesInitializer::CreateStaticInstance()
extern void UnityServicesInitializer_CreateStaticInstance_mA8A93029FC22CB37056B0B13AAA15AFD688E6B27 (void);
// 0x00000196 System.Void Unity.Services.Core.Internal.UnityServicesInitializer::EnableServicesInitializationAsync()
extern void UnityServicesInitializer_EnableServicesInitializationAsync_mA95682B14312A07BF9A5BE82795F52EDB68A33F8 (void);
// 0x00000197 System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::MoveNext()
extern void U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E (void);
// 0x00000198 System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553 (void);
// 0x00000199 Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::get_State()
extern void UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4 (void);
// 0x0000019A System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
extern void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4 (void);
// 0x0000019B Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::get_Options()
extern void UnityServicesInternal_get_Options_mF08FB9CE83332107302744620D7A459CC581C54F (void);
// 0x0000019C System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_Options(Unity.Services.Core.InitializationOptions)
extern void UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E (void);
// 0x0000019D Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
extern void UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4 (void);
// 0x0000019E Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.UnityServicesInternal::get_Metrics()
extern void UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750 (void);
// 0x0000019F Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.UnityServicesInternal::get_Diagnostics()
extern void UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3 (void);
// 0x000001A0 System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.CoreMetrics,Unity.Services.Core.Internal.CoreDiagnostics)
extern void UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252 (void);
// 0x000001A1 System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeAsync(Unity.Services.Core.InitializationOptions)
extern void UnityServicesInternal_InitializeAsync_m964BF1654D9A647F2216029243F3CB1ED6F600C4 (void);
// 0x000001A2 T Unity.Services.Core.Internal.UnityServicesInternal::GetService()
// 0x000001A3 System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
extern void UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03 (void);
// 0x000001A4 System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeServicesAsync()
extern void UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E (void);
// 0x000001A5 System.Void Unity.Services.Core.Internal.UnityServicesInternal::SendInitializationMetrics(System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>)
extern void UnityServicesInternal_SendInitializationMetrics_m130644476F26813A9527EC8DF92DF8AE0CA33996 (void);
// 0x000001A6 System.Void Unity.Services.Core.Internal.UnityServicesInternal::EnableInitialization()
extern void UnityServicesInternal_EnableInitialization_m22C8228B658003BA234EB36E085AEFC987490E47 (void);
// 0x000001A7 System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::EnableInitializationAsync()
extern void UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35 (void);
// 0x000001A8 System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::<InitializeAsync>g__HasInitializationFailed|19_0()
extern void UnityServicesInternal_U3CInitializeAsyncU3Eg__HasInitializationFailedU7C19_0_mB2307E67A9F90AB4A77573EA6B400FFF96458C0A (void);
// 0x000001A9 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__19::MoveNext()
extern void U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA (void);
// 0x000001AA System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F (void);
// 0x000001AB System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC (void);
// 0x000001AC System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SortPackages|0()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162 (void);
// 0x000001AD System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__InitializePackagesAsync|1()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_mEE77880AC081204F2488D583F410718E26B285FA (void);
// 0x000001AE System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__FailServicesInitialization|2(System.Exception)
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04 (void);
// 0x000001AF System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SucceedServicesInitialization|3()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3 (void);
// 0x000001B0 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::MoveNext()
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E (void);
// 0x000001B1 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D (void);
// 0x000001B2 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::MoveNext()
extern void U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B (void);
// 0x000001B3 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33 (void);
// 0x000001B4 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__25::MoveNext()
extern void U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3 (void);
// 0x000001B5 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6 (void);
// 0x000001B6 TDictionary Unity.Services.Core.Internal.DictionaryExtensions::MergeNoOverride(TDictionary,System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000001B7 TDictionary Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride(TDictionary,System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000001B8 System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000001B9 System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IDictionary`2<TKey,TValue>,TComparer)
// 0x000001BA System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
extern void UnityWebRequestUtils_HasSucceeded_mB0737EF4169CFB0110E7AFA40F3E9A649D6FB50D (void);
// 0x000001BB System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils::GetTextAsync(System.String)
extern void UnityWebRequestUtils_GetTextAsync_m0FBB057A5007FDF0C0771EA1D748D9612020A8F0 (void);
// 0x000001BC System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1 (void);
// 0x000001BD System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::<GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759 (void);
// 0x000001BE System.String Unity.Services.Core.Internal.Serialization.IJsonSerializer::SerializeObject(T)
// 0x000001BF T Unity.Services.Core.Internal.Serialization.IJsonSerializer::DeserializeObject(System.String)
// 0x000001C0 System.Void Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::.ctor(Newtonsoft.Json.JsonSerializerSettings)
extern void NewtonsoftSerializer__ctor_mB0CCDC64B219681F77D699C1E806E595491B1875 (void);
// 0x000001C1 System.Void Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::.ctor(Newtonsoft.Json.JsonSerializer)
extern void NewtonsoftSerializer__ctor_mE05B438480C96C31986036D084A95025C5E5D563 (void);
// 0x000001C2 System.String Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::SerializeObject(T)
// 0x000001C3 T Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::DeserializeObject(System.String)
static Il2CppMethodPointer s_methodPointers[451] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	HttpRequest__ctor_mFA4C4CD9671444C5892575B80746E0772BFBD2E2,
	HttpRequest__ctor_mC4489FDDBE8347EC6991F8FE82845193230AD16A,
	HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432,
	HttpRequest_SetUrl_m3D7DDD4113C5FDDEFA35499033A48BDCBCDF0F1A,
	HttpRequest_SetHeader_m2DC1503D7C51FA7E0D93ABD170EE43720114F4AB,
	HttpRequest_SetHeaders_mE3D7A9F8099C9FF9857674E646C3B0BD10A842A5,
	HttpRequest_SetBody_mE1ABCAE172B4BCDFDF9B9EA0A518C46997E8133D,
	HttpRequest_SetOptions_m1271D089E1B03979885B59141F1763C26BC48FE7,
	HttpRequest_SetRedirectLimit_mE0252B498EFF4A1AA52DD11AAFFA2F2A2FEE3D37,
	HttpRequest_SetTimeOutInSeconds_mCC75A3869DA6ECB09515FD6BDD6F17C47C70A908,
	HttpRequestExtensions_AsGet_m28DF3ED7F818274BF1AC977B17CC0C525E354AFD,
	HttpRequestExtensions_AsPost_mF1A934B205A1884F4981E920D31BE19A05B8FA3C,
	HttpRequestExtensions_AsPut_m890B18C8C5429D6E34E3FBF2F5057E2DDD26E6C9,
	HttpRequestExtensions_AsDelete_m5AD1D8F86BD40371874367FC549FB552A905C53F,
	HttpRequestExtensions_AsPatch_m4B291F0F4D58A20CF0200F26DE209AD888834512,
	HttpRequestExtensions_AsHead_mEFED7EF8E375D169ED994C2AF8AA72CDC363B165,
	HttpRequestExtensions_AsConnect_mA31E141BC108F548E27E0A004B61B6A24AB64053,
	HttpRequestExtensions_AsOptions_m746C02B3B06FCFBEA9680115FFAC4330970AE279,
	HttpRequestExtensions_AsTrace_m1409607795138437F7FB4EEE5ADB2D716A587065,
	HttpResponse_SetRequest_m5FAFFF426085600C4B924AF89876CFA229423982,
	HttpResponse_SetRequest_m157F40648D8A89D39A4FCA78A34C12844BD2972B,
	HttpResponse_SetHeader_mA8207E139EC699A78CCEAFE41099E106859739EF,
	HttpResponse_SetHeaders_m9787E73858C566DD4D3B2106CBF714E3BCEB1823,
	HttpResponse_SetData_m7C392B3890056E0405626462183B05F1A24F24BD,
	HttpResponse_SetStatusCode_m53FC74E65C0256A49B51F7F4ACB265958C08166E,
	HttpResponse_SetErrorMessage_m41C88451AEBB8A9727621F4E6F6C9D63EEF75AFE,
	HttpResponse_SetIsHttpError_m42D96A0FA33493639D8D312AB9B0E080CDD7AD91,
	HttpResponse_SetIsNetworkError_mBE51289A5E2DCCB412D3F15245A2DDD4109AFA9B,
	HttpResponse__ctor_mFF0EA6082417016169BE870EE83437BA173172B4,
	NULL,
	NULL,
	NULL,
	NULL,
	ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B,
	ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C,
	ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216,
	ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3,
	ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58,
	ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C,
	ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01,
	ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61,
	ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC,
	ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013,
	ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4,
	ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89,
	ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0,
	AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443,
	AsyncOperation_get_Status_m0A936D453514234140366F6C2318ECA656CF3A87,
	AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC,
	AsyncOperation_add_Completed_m3BF706D0128F8660347D12C9C4F4DCBB580EC67F,
	AsyncOperation_remove_Completed_mE76C24A21D1799C3979DBA0823F181CFEFCFB228,
	AsyncOperation_get_Exception_mA4C2316EBBAF7FC9E73CD1225E4D42E20F8663A9,
	AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244,
	AsyncOperation_SetInProgress_mF9F046353697ECEB9B2FD83E3193E8C050BCC860,
	AsyncOperation_Succeed_mE56F6B7EC1E7A92BD743C0B4E8D4EC85C1F07A28,
	AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF,
	AsyncOperation_Cancel_m32C14294FB4C72F2F3B260796F47D6401B2F4045,
	AsyncOperation_System_Collections_IEnumerator_MoveNext_m596CB807AE95B2B961DB02CED835209527DAB777,
	AsyncOperation_System_Collections_IEnumerator_Reset_m6A6B5E00A6EC7F7286CFF63F2802A2C9C83426AE,
	AsyncOperation_System_Collections_IEnumerator_get_Current_mE64353F2F4CB9E9CBD92B52FC1D56F96C6B93314,
	AsyncOperation__ctor_m39B9682C2896CAA23CAC25FCF9D902C19EBF11DE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668,
	AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0,
	AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957,
	AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4,
	AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504,
	U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA,
	U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430,
	U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D,
	U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F,
	NULL,
	AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8,
	NULL,
	NULL,
	NULL,
	NULL,
	AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C,
	AsyncOperationBase_remove_Completed_m275A690292CDEB367604BFCB1642DBFDFFF32625,
	AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948,
	AsyncOperationBase_OnCompleted_m857D67EBD531576BF37FB74499C781666DC27F88,
	AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314,
	U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1,
	U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AsyncOperationExtensions_GetAwaiter_m2C028ED897351C7B1B61E677F62AEB9DDBB2FE17,
	AsyncOperationExtensions_AsTask_m2EDCCEA7ABE216E3D5BDE1AABA6B8A7BDF82A4A5,
	NULL,
	NULL,
	U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54,
	U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A,
	TaskAsyncOperation_get_Status_mE71FE39E4040745C8991A9B2D9013485F2F570B2,
	TaskAsyncOperation_get_Exception_m0DE2EB1BFD825B1EC8DF097F19BEAB5A97A8476D,
	TaskAsyncOperation_GetResult_mF09BB788C2E02361476796AE889E2FA9E88541C6,
	TaskAsyncOperation_GetAwaiter_mAFF3CA07A0A4DAFBB96D2D11C5A5085A4988521F,
	TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46,
	TaskAsyncOperation_Run_mC16E6AD6990BFBC0CDD771A0CA5BCF976C91067F,
	TaskAsyncOperation_SetScheduler_m9332E7895ECAB965F2235125568C07C577113A0C,
	U3CU3Ec__cctor_m2DEEAD91E0DBC47856131A14B3B258C5088236B4,
	U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20,
	U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	CoreLogger_Log_mF35C18BCEE8C07B2E3DC5FD82151F964D5FA0194,
	CoreLogger_LogWarning_m3EC29259EEF1CEA23B40D00075D3030A789F43C0,
	CoreLogger_LogError_m60BDFED5C2144A408C9641D048F9A7C5141B8195,
	CoreLogger_LogException_mB3CF4A6EFC19F55590FA92A35024E4CC1224D582,
	CoreLogger_LogAssertion_mE6F3A1E0F0B4588A6420524D5CC94E42A8CA2215,
	CoreLogger_LogVerbose_m7E3463F8BDFECC42C657C52D7F710BE4402EF28F,
	CoreLogger_LogTelemetry_m384C868390F252B4021FB8B39F9908B73E647029,
	CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2,
	CircularDependencyException__ctor_m3D8DEB3AB4C12EFA05800264FF203F8DBB8F5D62,
	ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20,
	ComponentRegistry__ctor_m97BABC74F8A6513A5E39250E6CA5C891B6C03F53,
	ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A,
	NULL,
	NULL,
	NULL,
	ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8,
	ComponentRegistry_ResetProvidedComponents_m58F818C1716DBB973137A543DE880D24E2F25908,
	NULL,
	NULL,
	NULL,
	NULL,
	LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941,
	LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1,
	NULL,
	NULL,
	NULL,
	LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D,
	CorePackageRegistry_get_Instance_mA3CA7F1AA607A12DAC42AC645554119E00F93264,
	CorePackageRegistry_set_Instance_mD0C942798E1841FC837EA519E0D94C7F233E7A09,
	CorePackageRegistry_get_Registry_m6E57F342E4F5F394B7453CC81CD3512805909FE5,
	CorePackageRegistry_set_Registry_m582970875E935248441CC95D6B1FBC4939461F1A,
	CorePackageRegistry__ctor_mE38657AA57ECBFFD6FB3550D8BE9D75BB987EB4D,
	CorePackageRegistry__ctor_m695CCE0984D8B978D9028EEA866536BA140AC42A,
	NULL,
	CorePackageRegistry_Lock_m4C3243DA139AB0398555E608BFB5AFEBF2BFE2A1,
	CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1,
	NULL,
	NULL,
	NULL,
	CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2,
	CoreRegistry_set_Instance_mF131533D65A3CDAE3C7DCB969369DC33AE15CADA,
	CoreRegistry_get_InstanceId_m38E05C64DA268C1E6DC5DC075E477E27800ECB30,
	CoreRegistry_get_Type_m4AF53950970280B903127A44FAD55A3D299732C0,
	CoreRegistry_set_Type_m3A381E447C027551608E66912DBD90EB6A1260A5,
	CoreRegistry_get_Options_m38BF83E7ADFB48E1F4D00E33287EE500159E4B1A,
	CoreRegistry_set_Options_m9024B165E3C573BF8EE213B71ADAEADB3FB5EBB3,
	CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063,
	CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B,
	CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13,
	CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E,
	CoreRegistry_get_ServiceRegistry_mCFC68D980F88843196B8B5A4B4A9BB92F2511E66,
	CoreRegistry_set_ServiceRegistry_m5CF74C0F9167102E8822DC0D31886F3E8C3ED62C,
	CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314,
	CoreRegistry__ctor_mBA92BC251BFE18FBCD0333205685EE7CC74985AF,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC,
	CoreRegistry_LockServiceRegistration_m2C5B772568C138E931320D68C8D70C616DA2EED0,
	CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156,
	CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8,
	U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2_mC20491738C6723C6B9764C2DB7CDC60E5DE58D07,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C3_m8321C5FB6E23B64251E2A4538955AB5EA21C0930,
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52,
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7,
	U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD,
	U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74,
	U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23,
	U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2,
	DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C,
	DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928,
	DependencyTreeSortFailedException__ctor_m4AD28E1834D38336C77C1CCDA271244B84EA97ED,
	DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B,
	DependencyTreeSortFailedException_CreateExceptionMessage_m2E6122FBE998BA2615E6E185FB348F25BFE4296C,
	DependencyTreeExtensions_ToJson_m2C4230FE2EEDFBF054DFC22A1CFEDCA12AAE9BA2,
	DependencyTreeExtensions_IsOptional_mC8A55692071BF2CE146B2CA4C157B9918B8FFC29,
	DependencyTreeExtensions_IsProvided_mC13FBEF113FC24A5B0002B5AAB7D0528BD3FAF25,
	DependencyTreeExtensions_GetPackageJObject_mA85F231105D1D260FA97291DE00C984735E9AD0F,
	DependencyTreeExtensions_GetComponentJObject_mEC551883BBF8AAE3AC983172AAA9E688ECE2076C,
	DependencyTreeExtensions_GetComponentIdentifier_m8C966E32C965BC493052B10ED3301EC1946CE1E8,
	DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7,
	DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831,
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183,
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B,
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C,
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D,
	DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31,
	DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653,
	DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634,
	DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF,
	HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023,
	HashException__ctor_m5D99D5AC9A02DE153D481AA8BE5DF9D41FA0348E,
	HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B,
	HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655,
	DependencyTreePackageHashException__ctor_mE0682581DB0B7C459509731055254FB1DD746A18,
	DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33,
	DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7,
	DependencyTreeComponentHashException__ctor_m552C601C7E53E8ADCAC67541D9D4F2DA75EDFD26,
	DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4,
	DependencyTreeComponentHashException__ctor_mD0DF4D7831FECB6F2372624B0C6870D6D8D04FBE,
	NULL,
	NULL,
	NULL,
	MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59,
	MissingComponent__ctor_m2D280CE147B980C7656E897F5F237EB2A50A517B,
	PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A,
	LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927,
	LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D,
	LockedPackageRegistry_set_Tree_m51DD9195FEE8F0E7366F915B039495A797BC1C11,
	NULL,
	NULL,
	NULL,
	NULL,
	PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B,
	PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C,
	PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330,
	NULL,
	NULL,
	NULL,
	NULL,
	PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812,
	NULL,
	NULL,
	LockedServiceRegistry_get_Registry_m93C03C683E10EE6D6AF297CE3EF36BFAF281DD8A,
	LockedServiceRegistry__ctor_m2467137C25EE7BAE21C292BB5EEDA1B2D27CD68A,
	NULL,
	NULL,
	ServiceRegistry_get_ServiceTypeHashToInstance_m43D7C38487F32188AFBA41102852B8DA8F17B452,
	ServiceRegistry__ctor_m0C9FF2F4ED6D103192DFFADB0174890826DCC18E,
	ServiceRegistry__ctor_m1C4A09701C4E7DAB73FFA75529F2B79D02BA4005,
	NULL,
	NULL,
	CoreDiagnostics_get_Instance_m3874F9B1EE28D4E45BF8AE2C4CE9020A1710E5A8,
	CoreDiagnostics_set_Instance_m99771D0C00FF14763109900C8B374C226EFFC93C,
	CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20,
	CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7,
	CoreDiagnostics_set_DiagnosticsComponentProvider_m4980F8DAE6FC5015B00AB0A083327BDAB8F8A5B3,
	CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48,
	CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C,
	CoreDiagnostics_SetProjectConfiguration_mA70A7004CE8C36FA8E0F17E5529F666D536CF987,
	CoreDiagnostics_SendCircularDependencyDiagnostics_m9A32DD117AC9C01104B3B3EA17A886C46F6EA858,
	CoreDiagnostics_SendCorePackageInitDiagnostics_m70FFDD2D365654029B3C75CCDE12A384ED7C1397,
	CoreDiagnostics_SendOperateServicesInitDiagnostics_m01E3A52B731604F17403740C31004A83104E8461,
	CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7,
	CoreDiagnostics_OnSendFailed_m0258B860B57443CE673BDEEC071F918DA045CDE6,
	CoreDiagnostics_GetOrCreateDiagnosticsAsync_mA2C6BC3077D3EF4104FDE4C9BA26D4B8E640CFE2,
	CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330,
	U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0,
	U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838,
	U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC,
	U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839,
	CoreMetrics_get_Instance_m6E3FFB3ED86A6FA6C1DD1D087E0F3837DF3A8E4F,
	CoreMetrics_set_Instance_m94F9AC73074F522AAF6F2DD9FBAD506A6516783C,
	CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329,
	CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB,
	CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0,
	CoreMetrics_SendAllPackagesInitSuccessMetric_m6A0C4AD97DA5F22FCA1723F91096E1AC63400AC1,
	CoreMetrics_SendAllPackagesInitTimeMetric_m28BB6D84801BEFC36F21D22D148C2C53C19456C6,
	CoreMetrics_SendInitTimeMetricForPackage_m20190AC644BB9982E2833904EFE519C088EA566F,
	CoreMetrics_Initialize_m7F3B9703FBA1138C36F4C3FE4838443B772B9AE7,
	CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2,
	CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2,
	UnityServicesInitializer_CreateStaticInstance_mA8A93029FC22CB37056B0B13AAA15AFD688E6B27,
	UnityServicesInitializer_EnableServicesInitializationAsync_mA95682B14312A07BF9A5BE82795F52EDB68A33F8,
	U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E,
	U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553,
	UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4,
	UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4,
	UnityServicesInternal_get_Options_mF08FB9CE83332107302744620D7A459CC581C54F,
	UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E,
	UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4,
	UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750,
	UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3,
	UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252,
	UnityServicesInternal_InitializeAsync_m964BF1654D9A647F2216029243F3CB1ED6F600C4,
	NULL,
	UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03,
	UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E,
	UnityServicesInternal_SendInitializationMetrics_m130644476F26813A9527EC8DF92DF8AE0CA33996,
	UnityServicesInternal_EnableInitialization_m22C8228B658003BA234EB36E085AEFC987490E47,
	UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35,
	UnityServicesInternal_U3CInitializeAsyncU3Eg__HasInitializationFailedU7C19_0_mB2307E67A9F90AB4A77573EA6B400FFF96458C0A,
	U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA,
	U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F,
	U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_mEE77880AC081204F2488D583F410718E26B285FA,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3,
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E,
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D,
	U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B,
	U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33,
	U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3,
	U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6,
	NULL,
	NULL,
	NULL,
	NULL,
	UnityWebRequestUtils_HasSucceeded_mB0737EF4169CFB0110E7AFA40F3E9A649D6FB50D,
	UnityWebRequestUtils_GetTextAsync_m0FBB057A5007FDF0C0771EA1D748D9612020A8F0,
	U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1,
	U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759,
	NULL,
	NULL,
	NewtonsoftSerializer__ctor_mB0CCDC64B219681F77D699C1E806E595491B1875,
	NewtonsoftSerializer__ctor_mE05B438480C96C31986036D084A95025C5E5D563,
	NULL,
	NULL,
};
extern void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_AdjustorThunk (void);
extern void ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C_AdjustorThunk (void);
extern void ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216_AdjustorThunk (void);
extern void ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3_AdjustorThunk (void);
extern void ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58_AdjustorThunk (void);
extern void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C_AdjustorThunk (void);
extern void ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01_AdjustorThunk (void);
extern void ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61_AdjustorThunk (void);
extern void ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC_AdjustorThunk (void);
extern void ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013_AdjustorThunk (void);
extern void ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4_AdjustorThunk (void);
extern void ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89_AdjustorThunk (void);
extern void ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068_AdjustorThunk (void);
extern void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_AdjustorThunk (void);
extern void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0_AdjustorThunk (void);
extern void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957_AdjustorThunk (void);
extern void AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4_AdjustorThunk (void);
extern void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_AdjustorThunk (void);
extern void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74_AdjustorThunk (void);
extern void U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_AdjustorThunk (void);
extern void U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk (void);
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0_AdjustorThunk (void);
extern void U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838_AdjustorThunk (void);
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC_AdjustorThunk (void);
extern void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839_AdjustorThunk (void);
extern void U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E_AdjustorThunk (void);
extern void U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553_AdjustorThunk (void);
extern void U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA_AdjustorThunk (void);
extern void U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F_AdjustorThunk (void);
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E_AdjustorThunk (void);
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D_AdjustorThunk (void);
extern void U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_AdjustorThunk (void);
extern void U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33_AdjustorThunk (void);
extern void U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3_AdjustorThunk (void);
extern void U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[49] = 
{
	{ 0x0600004F, ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_AdjustorThunk },
	{ 0x06000050, ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C_AdjustorThunk },
	{ 0x06000051, ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216_AdjustorThunk },
	{ 0x06000052, ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3_AdjustorThunk },
	{ 0x06000053, ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58_AdjustorThunk },
	{ 0x06000054, ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C_AdjustorThunk },
	{ 0x06000055, ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01_AdjustorThunk },
	{ 0x06000056, ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61_AdjustorThunk },
	{ 0x06000057, ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC_AdjustorThunk },
	{ 0x06000058, ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013_AdjustorThunk },
	{ 0x06000059, ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4_AdjustorThunk },
	{ 0x0600005A, ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89_AdjustorThunk },
	{ 0x0600005B, ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068_AdjustorThunk },
	{ 0x0600008A, AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_AdjustorThunk },
	{ 0x0600008B, AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0_AdjustorThunk },
	{ 0x0600008C, AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957_AdjustorThunk },
	{ 0x0600008D, AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4_AdjustorThunk },
	{ 0x0600008E, AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_AdjustorThunk },
	{ 0x06000109, CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk },
	{ 0x0600012B, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52_AdjustorThunk },
	{ 0x0600012C, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7_AdjustorThunk },
	{ 0x0600012D, U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD_AdjustorThunk },
	{ 0x0600012E, U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74_AdjustorThunk },
	{ 0x0600012F, U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_AdjustorThunk },
	{ 0x06000130, U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2_AdjustorThunk },
	{ 0x0600013C, DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk },
	{ 0x0600013D, DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk },
	{ 0x0600013E, DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk },
	{ 0x0600013F, DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk },
	{ 0x06000140, DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk },
	{ 0x06000141, DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk },
	{ 0x06000142, DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk },
	{ 0x06000143, DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk },
	{ 0x06000144, DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk },
	{ 0x06000145, DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk },
	{ 0x06000186, U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0_AdjustorThunk },
	{ 0x06000187, U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838_AdjustorThunk },
	{ 0x06000188, U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC_AdjustorThunk },
	{ 0x06000189, U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839_AdjustorThunk },
	{ 0x06000197, U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E_AdjustorThunk },
	{ 0x06000198, U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553_AdjustorThunk },
	{ 0x060001A9, U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA_AdjustorThunk },
	{ 0x060001AA, U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F_AdjustorThunk },
	{ 0x060001B0, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E_AdjustorThunk },
	{ 0x060001B1, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D_AdjustorThunk },
	{ 0x060001B2, U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_AdjustorThunk },
	{ 0x060001B3, U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33_AdjustorThunk },
	{ 0x060001B4, U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3_AdjustorThunk },
	{ 0x060001B5, U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6_AdjustorThunk },
};
static const int32_t s_InvokerIndices[451] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4902,
	942,
	3534,
	3534,
	1816,
	3534,
	3534,
	3530,
	3532,
	3532,
	7088,
	7088,
	7088,
	7088,
	7088,
	7088,
	7088,
	7088,
	7088,
	3534,
	3537,
	1816,
	3534,
	3534,
	3533,
	3534,
	3521,
	3521,
	4902,
	0,
	0,
	0,
	0,
	3981,
	4786,
	4786,
	4786,
	4786,
	3981,
	4807,
	4786,
	4786,
	4763,
	4786,
	4711,
	4711,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4711,
	3903,
	4762,
	3960,
	3981,
	3981,
	4786,
	3981,
	4902,
	4902,
	3981,
	4902,
	4711,
	4902,
	4786,
	4902,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3981,
	3981,
	3981,
	4711,
	4902,
	4902,
	3981,
	4902,
	3981,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4711,
	0,
	4711,
	0,
	0,
	0,
	0,
	3981,
	3981,
	4902,
	3981,
	4902,
	4902,
	3981,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6871,
	7088,
	0,
	0,
	4902,
	3981,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4711,
	4762,
	4786,
	4902,
	4786,
	3981,
	7088,
	7451,
	7451,
	4902,
	2278,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7315,
	7315,
	7315,
	7315,
	7315,
	7315,
	7315,
	4902,
	3981,
	4786,
	4902,
	3981,
	0,
	0,
	0,
	2833,
	3981,
	0,
	0,
	0,
	0,
	4786,
	3981,
	0,
	0,
	0,
	3981,
	7422,
	7315,
	4786,
	3981,
	4902,
	3981,
	0,
	4902,
	2274,
	0,
	0,
	0,
	7422,
	7315,
	4786,
	4762,
	3960,
	4786,
	3981,
	4786,
	3981,
	4786,
	3981,
	4786,
	3981,
	4902,
	1279,
	0,
	0,
	0,
	0,
	0,
	0,
	4902,
	4902,
	2278,
	4786,
	4902,
	3534,
	3532,
	3534,
	4902,
	4902,
	3981,
	4902,
	3981,
	4902,
	3981,
	4902,
	942,
	2278,
	1297,
	6047,
	6551,
	6348,
	6348,
	6547,
	6547,
	7088,
	2278,
	4902,
	4902,
	3981,
	3960,
	3981,
	2083,
	4786,
	3308,
	3532,
	4762,
	3960,
	2103,
	1240,
	3960,
	2103,
	1240,
	3960,
	2103,
	1240,
	0,
	0,
	0,
	4786,
	3981,
	4902,
	0,
	0,
	0,
	0,
	0,
	0,
	4786,
	3981,
	4786,
	3981,
	0,
	0,
	0,
	0,
	4786,
	3981,
	3981,
	0,
	0,
	0,
	0,
	2083,
	0,
	0,
	4786,
	3981,
	0,
	0,
	4786,
	4902,
	3981,
	0,
	0,
	7422,
	7315,
	4786,
	4786,
	3981,
	4786,
	3981,
	3981,
	3981,
	3981,
	3981,
	1816,
	7315,
	4786,
	4902,
	4902,
	3981,
	4902,
	3981,
	7422,
	7315,
	4786,
	3981,
	4786,
	4902,
	3929,
	2272,
	1297,
	2278,
	4902,
	7451,
	7451,
	4902,
	3981,
	4762,
	3960,
	4786,
	3981,
	4786,
	4786,
	4786,
	1297,
	3534,
	0,
	4711,
	4786,
	3981,
	4902,
	4786,
	4711,
	4902,
	3981,
	4902,
	4902,
	4786,
	3981,
	4902,
	4902,
	3981,
	4902,
	3981,
	4902,
	3981,
	0,
	0,
	0,
	0,
	6895,
	7088,
	4902,
	3981,
	0,
	0,
	3981,
	3981,
	0,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[37] = 
{
	{ 0x02000027, { 0, 7 } },
	{ 0x0200002B, { 7, 14 } },
	{ 0x02000030, { 21, 10 } },
	{ 0x02000034, { 44, 8 } },
	{ 0x0200003C, { 52, 14 } },
	{ 0x0200003D, { 66, 6 } },
	{ 0x060000BB, { 31, 2 } },
	{ 0x060000BC, { 33, 11 } },
	{ 0x060000F2, { 72, 3 } },
	{ 0x060000F3, { 75, 2 } },
	{ 0x060000F4, { 77, 2 } },
	{ 0x060000FE, { 79, 1 } },
	{ 0x060000FF, { 80, 1 } },
	{ 0x06000107, { 81, 1 } },
	{ 0x0600010A, { 82, 1 } },
	{ 0x0600010B, { 83, 1 } },
	{ 0x0600010C, { 84, 1 } },
	{ 0x0600011C, { 85, 1 } },
	{ 0x0600011D, { 86, 1 } },
	{ 0x0600011E, { 87, 1 } },
	{ 0x0600011F, { 88, 1 } },
	{ 0x06000120, { 89, 1 } },
	{ 0x06000121, { 90, 1 } },
	{ 0x06000167, { 91, 2 } },
	{ 0x06000168, { 93, 1 } },
	{ 0x06000169, { 94, 1 } },
	{ 0x0600016A, { 95, 1 } },
	{ 0x06000171, { 96, 1 } },
	{ 0x06000175, { 97, 3 } },
	{ 0x06000176, { 100, 2 } },
	{ 0x060001A2, { 102, 1 } },
	{ 0x060001B6, { 103, 10 } },
	{ 0x060001B7, { 113, 9 } },
	{ 0x060001B8, { 122, 3 } },
	{ 0x060001B9, { 125, 13 } },
	{ 0x060001C2, { 138, 2 } },
	{ 0x060001C3, { 140, 2 } },
};
extern const uint32_t g_rgctx_AsyncOperation_1_get_IsDone_m9B20F0ED4D9A15E2F4E744560719E0268F85A713;
extern const uint32_t g_rgctx_Action_1_t0DE7600CDD479DAF44902E797130D2231F4E6FE8;
extern const uint32_t g_rgctx_Action_1_Invoke_m6EAC6AB884975E3CA6076D8B807609ABD700D7C1;
extern const uint32_t g_rgctx_AsyncOperation_1_set_Status_m0FF1435AB8C25949382BB8C897DB9B920BCFEC28;
extern const uint32_t g_rgctx_AsyncOperation_1_set_Result_m987801E0BB55F2FF54D8AAC26D42D40E8C8CB88A;
extern const uint32_t g_rgctx_AsyncOperation_1_set_IsDone_m6F73C83DAB8380329A9A854F0977013AD4A4C2E6;
extern const uint32_t g_rgctx_AsyncOperation_1_set_Exception_mE3499779A5AB5EACAC49ADE12521022E37E6758C;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass2_0_t458D31C1B96B7BAD47A2D86D04DF5E509826C2EF;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass2_0__ctor_m59B9DB3DCDB5A2236E9491303FBF11988223E14E;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m3CFD966A62F58649B3BE97162C81520A746D7549;
extern const uint32_t g_rgctx_Action_1_t34FB1ED8136C529DE1BE1621C1884F93B9270831;
extern const uint32_t g_rgctx_Action_1__ctor_m035717A5CDA9B06C5A4543E0C021BCEBFA2384A9;
extern const uint32_t g_rgctx_IAsyncOperation_1_t64365B8A91735D4D43EAC82A15936861194E669E;
extern const uint32_t g_rgctx_IAsyncOperation_1_add_Completed_mE459486C36B0E942E3D8852E5BBE75AC1A7402D6;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass3_0_t78EB261C544D9C9D6424DD9A1C0AC9BA3442A5C8;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass3_0__ctor_m8688EB35C0AC36DF94585822B2375FC7F11D2AF4;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m33ED89F671CCA69DB8719804C35325DC0D6256C2;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_IsDone_mB158B39001678D767CF3021498C1DB45F89ADD03;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_Status_mC6695E492661948491FF47660C195D1CE1D00F5B;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_Exception_m07698C2FD6034F94D9A74A1E578DC28A6EB2F3EB;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_Result_mF0EFB48027BE942378C4580CF0E06C9D84DA26BF;
extern const uint32_t g_rgctx_AsyncOperationBase_1_t2B32CB183C19AFC696DD81C1259BF2318C553D24;
extern const uint32_t g_rgctx_AsyncOperationBase_1_get_IsCompleted_mB6E35CF5A905DEDE6C751FFCEA54B487B1D46E3D;
extern const uint32_t g_rgctx_AsyncOperationBase_1_get_IsDone_m0E4A0B8072E5E2257C3A396BBF097B3D50EC9BA9;
extern const uint32_t g_rgctx_Action_1_t362BBEB22ACF716AEE6EC04818CC4C0FE2BAB0C4;
extern const uint32_t g_rgctx_Action_1_Invoke_m466D37FF4C7B084F15A935A8A56BA7E0F0549FCF;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass19_0_t44FF0E27BDC13748E987A5CF48621D4F27FE3BDA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass19_0__ctor_m34B4FAFE53C253EE56ED661B47724FD203D50F56;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass19_0_U3COnCompletedU3Eb__0_mB0E1B4A7BFC70F2FA8EB5FC5D1F1581A566A1690;
extern const uint32_t g_rgctx_Action_1__ctor_m89ACE811E69D42198A39179AA1EA31BFBE18FC58;
extern const uint32_t g_rgctx_AsyncOperationBase_1_add_Completed_m25B665128ABB6C2B2050195D772E4517490FE765;
extern const uint32_t g_rgctx_AsyncOperationAwaiter_1_t5C32878C4610E2D49DDF8193988705DFBA8B769F;
extern const uint32_t g_rgctx_AsyncOperationAwaiter_1__ctor_mDD9B3384713580FC966CDBEC8ED92C94BB074C9A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass3_0_1_tF56784882AC62BD0737EF960148279E926DB6FCF;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass3_0_1__ctor_m40AD1490A9924A02B1677B1B9439E4FA9824E8D2;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t09551C760526F36D8A3C527451F5E7885901FBB7;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m62E8054C2F58F50C07815EF6871A728486048074;
extern const uint32_t g_rgctx_IAsyncOperation_1_t0E3A308396AFAA3C325D7EE414FB7314CFB0526A;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_IsDone_m77D98E044A50C56B9FD76C896ACC090FD5D1ED33;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass3_0_1_U3CAsTaskU3Eg__CompleteTaskU7C0_m7620591B8C7E52B24270F8BE5276202D9D9E80E7;
extern const uint32_t g_rgctx_Action_1_t3C29DF5F6B2AA96412DCB774568A2C433FD9B021;
extern const uint32_t g_rgctx_Action_1__ctor_m29B8C3C759D67D5A09B6A1830D15EF06E4B31B2A;
extern const uint32_t g_rgctx_IAsyncOperation_1_add_Completed_m913A6FAE62BE04126C3C0A0EF76CD4AE460111FF;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m012D212A831CDCA2F3931028071643F34BABC92B;
extern const uint32_t g_rgctx_IAsyncOperation_1_t34EBE0780C0EB9F509BFF311732FD90229C4FB05;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_Status_mE2CEDB1A25868BA3820592F83EE20969559AA7D1;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_Result_m38FB6AF48771E8BA1DF265B6DA654B30A9B52278;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tA4C5D3F9632DDB914436183933CF47D9C3339A94;
extern const uint32_t g_rgctx_TaskCompletionSource_1_TrySetResult_m0AF15CEBA0CF2ACA39E3E2233CEB9CE098E2B51D;
extern const uint32_t g_rgctx_IAsyncOperation_1_get_Exception_mF8E8539F4E0CD4E4F402493DF340159A26F27E5B;
extern const uint32_t g_rgctx_TaskCompletionSource_1_TrySetException_mDF3880E349681922F9E9A671617D2B5C5FE2715D;
extern const uint32_t g_rgctx_TaskCompletionSource_1_TrySetCanceled_m598AEBB94BD1DDF81ED5F2D6467FAEC9EAFA87BC;
extern const uint32_t g_rgctx_Task_1_t860C38C5D40386A9601D6B4D23961384863F998A;
extern const uint32_t g_rgctx_Task_1_get_Result_mE8A4FEB6313DFBD808E3A3DE0A8B3F1C67030CD2;
extern const uint32_t g_rgctx_Task_1_GetAwaiter_mE53979D0E8F2FC2E577C2BB80777C06EEFB1D086;
extern const uint32_t g_rgctx_TaskAwaiter_1_GetResult_mA76A92B3350262C980EB694713D4E2FB58E3957E;
extern const uint32_t g_rgctx_AsyncOperationBase_1__ctor_m98F3F71CF8E8EEB1202E8D25F4AACCF20FFBC979;
extern const uint32_t g_rgctx_AsyncOperationBase_1_t9A0F13ABEABEBA79DC4123AE1D977E0DE4B5F0D1;
extern const uint32_t g_rgctx_U3CU3Ec_tB9BBFAAF724D60419381A6208B56623ACCEFE13A;
extern const uint32_t g_rgctx_U3CU3Ec_U3C_ctorU3Eb__11_0_m2391B0CD022060E26D09949DDF71B6141F763800;
extern const uint32_t g_rgctx_Action_2_t184C10D5D654A23BAA30FC54F8311002F1CB8146;
extern const uint32_t g_rgctx_Action_2__ctor_m292C1B190DC70DA275CE218F2C67F0844831B6BA;
extern const uint32_t g_rgctx_Task_1_ContinueWith_m0FAF544BE1BCA66A025B6341E9711E9A05FB1656;
extern const uint32_t g_rgctx_Task_1__ctor_mA9FE4E6CA59FD8563FAEB2C8766EA459EECE9346;
extern const uint32_t g_rgctx_TaskAsyncOperation_1_t68206EA0A5CE2C9F86DEE3AD82475D1338A1BE22;
extern const uint32_t g_rgctx_TaskAsyncOperation_1__ctor_m82F1AD82F4EA091424BB002B45B1B40DD7512E47;
extern const uint32_t g_rgctx_U3CU3Ec_tAD26EC959577C722AC6D4E47E462A25C624A6604;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_mA84065182F675C4B7DEF18ACE8719884D762906F;
extern const uint32_t g_rgctx_U3CU3Ec_tAD26EC959577C722AC6D4E47E462A25C624A6604;
extern const uint32_t g_rgctx_TaskAsyncOperation_1_t4FA52EBADB38AB54309195B5F580EBB2681C7555;
extern const uint32_t g_rgctx_AsyncOperationBase_1_tDE61D6004076D3AFFF06D1090032680F2691E39A;
extern const uint32_t g_rgctx_AsyncOperationBase_1_DidComplete_mBC3E2E20A02122165088D70F6C7B9BF76029A8B4;
extern const uint32_t g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19;
extern const uint32_t g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19;
extern const Il2CppRGCTXConstrainedData g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3;
extern const uint32_t g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C;
extern const uint32_t g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C;
extern const uint32_t g_rgctx_TComponent_t130BF19587914E947C48639394F287609299ACAF;
extern const uint32_t g_rgctx_TComponent_t130BF19587914E947C48639394F287609299ACAF;
extern const uint32_t g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93_m49E36B01B9275916714436B280553CD140C85156;
extern const uint32_t g_rgctx_IComponentRegistry_TryGetServiceComponent_TisTComponent_tBAA5FE9669F163078D418D90A722488B21C8DE7F_mCC66EE6E2E3E1D54189C3DEE4652D3B7AE52F7C3;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_tD9C5D9B459B225940045E7933443C8B783656397_mC535DC040374F4E5C9752240EC89757EF6460FC7;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterDependency_TisT_tF7329CEE248A45B379F2D9B9C20F1C509D5AC5BE_mAD6891506B8D0C6E17D74F7C8BB210301F897701;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterOptionalDependency_TisT_tCCF33AF0BF9585F8C54899E9E6F8D47870BAFE99_m70E798148F7356F9EE77CBC9C904A07D27D7AA4F;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterProvision_TisT_tAF2C20D6116F2B37117D32E592CC2526F3C66387_mB4B584384E95C9C399D4C4F0099A378683FD9F3C;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_t1F53D662DD7D083035D429593DB6417C7D00B466_m263AC8BBE177344DE7192B249E8EB1582607BF42;
extern const uint32_t g_rgctx_IComponentRegistry_RegisterServiceComponent_TisTComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B_mB9D0C705AE4607805AB4E3AADD0D1A95EEBA7693;
extern const uint32_t g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343_m14AD4DCAA8DFFB5BBC39FAD1072B05CD971B93F3;
extern const uint32_t g_rgctx_IComponentRegistry_TryGetServiceComponent_TisTComponent_t63F4641582EF28E1A29836880D3901F16F1A791D_m180267B27EB2DCF5781CE1A94CE910E10B84F020;
extern const uint32_t g_rgctx_IServiceRegistry_RegisterService_TisT_t09457E30706523654E3521972406984085601E37_mEF7ABFD5435A79939CC1F114F390A1EB9BA78328;
extern const uint32_t g_rgctx_IServiceRegistry_GetService_TisT_t23C885B0A25C50383E3E20487DCB3B87E630ED85_m0EE615A0CE7D0BF2A448AFD7577B848FD3E233DE;
extern const uint32_t g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8;
extern const uint32_t g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8;
extern const uint32_t g_rgctx_TComponent_t238DC5B730435DEF358B69AF16052E2640F2DDAC;
extern const uint32_t g_rgctx_TComponent_t0A42BC7DB4D3931FC95421414239D0563923E6A3;
extern const uint32_t g_rgctx_TComponent_t4EAFE06D169C0A9F5CEA93DA71BFAF9901F32E5E;
extern const uint32_t g_rgctx_IServiceRegistry_GetService_TisT_t08D808BB2F60B04DE55233B6337B1690746FFB51_m0F40F5175D1F8248F5FE209F7F649304330F83DA;
extern const uint32_t g_rgctx_T_t15F996795977B16B82C8628114F76EFE64FAD1DA;
extern const uint32_t g_rgctx_T_t15F996795977B16B82C8628114F76EFE64FAD1DA;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t15F996795977B16B82C8628114F76EFE64FAD1DA_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3;
extern const uint32_t g_rgctx_T_tED72483001C711656F37583433592491ACCB57AF;
extern const uint32_t g_rgctx_T_tED72483001C711656F37583433592491ACCB57AF;
extern const uint32_t g_rgctx_CoreRegistry_GetService_TisT_t827C3E9A778E61C957C0C5E502C8505C6A62BBE1_m5FD2294BC041EA704ABC12521F2CB7B99C03AE12;
extern const uint32_t g_rgctx_IEnumerable_1_t99795D35A77A984EF53EF434D83E795A61CCE1C4;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mDB58D786993B22A0861BD70AC78081EE7D75507F;
extern const uint32_t g_rgctx_IEnumerator_1_tCA9E1243F18F77ED9F6844DFB931429E7B8FF235;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m09AC959164ABE7528EE7BFBBD051B035F11EBDBD;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_mA54A363FA71629E1F7C634D79CB00B809DB877A7;
extern const uint32_t g_rgctx_TDictionary_t1B194603F07A7CCDFCD59B413831AEA0D49DF2FA;
extern const uint32_t g_rgctx_IDictionary_2_t82E84570784FBFC905C91737EA5980AA7EE33A99;
extern const Il2CppRGCTXConstrainedData g_rgctx_TDictionary_t1B194603F07A7CCDFCD59B413831AEA0D49DF2FA_IDictionary_2_ContainsKey_mC66E5DDD5C4CE2930367E5AFEBE87EB42B54EB57;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_mA51ED47703CBF7F28BC4500D5B02B8788DE0AAD2;
extern const Il2CppRGCTXConstrainedData g_rgctx_TDictionary_t1B194603F07A7CCDFCD59B413831AEA0D49DF2FA_IDictionary_2_set_Item_m5D7AF815B463CE07D6445D96ED753F8AD9CE3AB1;
extern const uint32_t g_rgctx_IEnumerable_1_t3AB5FDFC395F9C2469B1462108930A452B6090A7;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m2AEBB94C387C5FEAB75B7EE0AAACA1560AC4FA35;
extern const uint32_t g_rgctx_IEnumerator_1_t11B905B4DED25A3F80738C33CBD410D29EB2E579;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mEAC4C6687A490893B487199C56F126CE8C5F1E32;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_m5D8E85E0DD054DBC9DA4F4119B078FCB6433AAD0;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_m29CDE01E4FFC76D0BC74015111BA9696C170FFEB;
extern const uint32_t g_rgctx_TDictionary_tB358D3B3F15042E79DDC432F8A8201A49FFC920D;
extern const uint32_t g_rgctx_IDictionary_2_tCEA790535468C53879CE273E877E5DA28E277248;
extern const Il2CppRGCTXConstrainedData g_rgctx_TDictionary_tB358D3B3F15042E79DDC432F8A8201A49FFC920D_IDictionary_2_set_Item_m96025EE0937DF9D3508EF12D89CDB8F195F8C51D;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_mE27F01695CB801C02F25C7E1B189132940AE00C0;
extern const uint32_t g_rgctx_EqualityComparer_1_t110DA344FAAB4AE4E0DDF9258BA7459BF9AD4A5C;
extern const uint32_t g_rgctx_DictionaryExtensions_ValueEquals_TisTKey_t6168B50FF403D68F4A642BA266D79B47B6B35EF6_TisTValue_tF301E57BFC887414857135C629EAF0480849133F_TisEqualityComparer_1_t110DA344FAAB4AE4E0DDF9258BA7459BF9AD4A5C_m6E40C8C741FD9E4FCC045C420C182608FB92FFAC;
extern const uint32_t g_rgctx_ICollection_1_tF87358FCCE9F38D917DF2290B6FD403C185C12CE;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m1E65F784AA1E6EA5E8717C067921DD12179D22AF;
extern const uint32_t g_rgctx_IEnumerable_1_t326F945BA68CE770C43AAD27E449A4D4037512C3;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m484B2A535767F96B3FDF549FB260C4ACD6B6998D;
extern const uint32_t g_rgctx_IEnumerator_1_t37AC52C9EDC96F99212DAA1EA587614A24857934;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m3892B4B1BA8F3CEA18F397FE686F6198A1FFA170;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_m5E014DA8B2272BF56222068F90FDEB421B901D12;
extern const uint32_t g_rgctx_IDictionary_2_t38ADE5C52B0E9392323A27659DC57E2C2671149C;
extern const uint32_t g_rgctx_IDictionary_2_TryGetValue_m38C9A6E3E22FA39565B455CB9F14A7137CD2ABA4;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_mCC91CB20BEE31E311100794C7FAEF37E5DC8B81A;
extern const uint32_t g_rgctx_TComparer_t2DECD95B734FC4A29EF792088E2D3BFF17785C69;
extern const uint32_t g_rgctx_IEqualityComparer_1_t8BAC7AF45438E0A8DA528E4671AB839136007933;
extern const Il2CppRGCTXConstrainedData g_rgctx_TComparer_t2DECD95B734FC4A29EF792088E2D3BFF17785C69_IEqualityComparer_1_Equals_m92B612B242D42CD21B6B77B64C28207CCBABB987;
extern const uint32_t g_rgctx_T_t9810D239A31B3FCB8478D86DFCD475F3575412D9;
extern const uint32_t g_rgctx_T_t9810D239A31B3FCB8478D86DFCD475F3575412D9;
extern const uint32_t g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA;
extern const uint32_t g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA;
static const Il2CppRGCTXDefinition s_rgctxValues[142] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperation_1_get_IsDone_m9B20F0ED4D9A15E2F4E744560719E0268F85A713 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t0DE7600CDD479DAF44902E797130D2231F4E6FE8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m6EAC6AB884975E3CA6076D8B807609ABD700D7C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperation_1_set_Status_m0FF1435AB8C25949382BB8C897DB9B920BCFEC28 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperation_1_set_Result_m987801E0BB55F2FF54D8AAC26D42D40E8C8CB88A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperation_1_set_IsDone_m6F73C83DAB8380329A9A854F0977013AD4A4C2E6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperation_1_set_Exception_mE3499779A5AB5EACAC49ADE12521022E37E6758C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass2_0_t458D31C1B96B7BAD47A2D86D04DF5E509826C2EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass2_0__ctor_m59B9DB3DCDB5A2236E9491303FBF11988223E14E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m3CFD966A62F58649B3BE97162C81520A746D7549 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t34FB1ED8136C529DE1BE1621C1884F93B9270831 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1__ctor_m035717A5CDA9B06C5A4543E0C021BCEBFA2384A9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAsyncOperation_1_t64365B8A91735D4D43EAC82A15936861194E669E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_add_Completed_mE459486C36B0E942E3D8852E5BBE75AC1A7402D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass3_0_t78EB261C544D9C9D6424DD9A1C0AC9BA3442A5C8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass3_0__ctor_m8688EB35C0AC36DF94585822B2375FC7F11D2AF4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m33ED89F671CCA69DB8719804C35325DC0D6256C2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_IsDone_mB158B39001678D767CF3021498C1DB45F89ADD03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_Status_mC6695E492661948491FF47660C195D1CE1D00F5B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_Exception_m07698C2FD6034F94D9A74A1E578DC28A6EB2F3EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_Result_mF0EFB48027BE942378C4580CF0E06C9D84DA26BF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOperationBase_1_t2B32CB183C19AFC696DD81C1259BF2318C553D24 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperationBase_1_get_IsCompleted_mB6E35CF5A905DEDE6C751FFCEA54B487B1D46E3D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperationBase_1_get_IsDone_m0E4A0B8072E5E2257C3A396BBF097B3D50EC9BA9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t362BBEB22ACF716AEE6EC04818CC4C0FE2BAB0C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m466D37FF4C7B084F15A935A8A56BA7E0F0549FCF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass19_0_t44FF0E27BDC13748E987A5CF48621D4F27FE3BDA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass19_0__ctor_m34B4FAFE53C253EE56ED661B47724FD203D50F56 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass19_0_U3COnCompletedU3Eb__0_mB0E1B4A7BFC70F2FA8EB5FC5D1F1581A566A1690 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1__ctor_m89ACE811E69D42198A39179AA1EA31BFBE18FC58 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperationBase_1_add_Completed_m25B665128ABB6C2B2050195D772E4517490FE765 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOperationAwaiter_1_t5C32878C4610E2D49DDF8193988705DFBA8B769F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperationAwaiter_1__ctor_mDD9B3384713580FC966CDBEC8ED92C94BB074C9A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass3_0_1_tF56784882AC62BD0737EF960148279E926DB6FCF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass3_0_1__ctor_m40AD1490A9924A02B1677B1B9439E4FA9824E8D2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t09551C760526F36D8A3C527451F5E7885901FBB7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m62E8054C2F58F50C07815EF6871A728486048074 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAsyncOperation_1_t0E3A308396AFAA3C325D7EE414FB7314CFB0526A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_IsDone_m77D98E044A50C56B9FD76C896ACC090FD5D1ED33 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass3_0_1_U3CAsTaskU3Eg__CompleteTaskU7C0_m7620591B8C7E52B24270F8BE5276202D9D9E80E7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t3C29DF5F6B2AA96412DCB774568A2C433FD9B021 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1__ctor_m29B8C3C759D67D5A09B6A1830D15EF06E4B31B2A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_add_Completed_m913A6FAE62BE04126C3C0A0EF76CD4AE460111FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m012D212A831CDCA2F3931028071643F34BABC92B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IAsyncOperation_1_t34EBE0780C0EB9F509BFF311732FD90229C4FB05 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_Status_mE2CEDB1A25868BA3820592F83EE20969559AA7D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_Result_m38FB6AF48771E8BA1DF265B6DA654B30A9B52278 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tA4C5D3F9632DDB914436183933CF47D9C3339A94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_TrySetResult_m0AF15CEBA0CF2ACA39E3E2233CEB9CE098E2B51D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IAsyncOperation_1_get_Exception_mF8E8539F4E0CD4E4F402493DF340159A26F27E5B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_TrySetException_mDF3880E349681922F9E9A671617D2B5C5FE2715D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_TrySetCanceled_m598AEBB94BD1DDF81ED5F2D6467FAEC9EAFA87BC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t860C38C5D40386A9601D6B4D23961384863F998A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_get_Result_mE8A4FEB6313DFBD808E3A3DE0A8B3F1C67030CD2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_GetAwaiter_mE53979D0E8F2FC2E577C2BB80777C06EEFB1D086 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_GetResult_mA76A92B3350262C980EB694713D4E2FB58E3957E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperationBase_1__ctor_m98F3F71CF8E8EEB1202E8D25F4AACCF20FFBC979 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOperationBase_1_t9A0F13ABEABEBA79DC4123AE1D977E0DE4B5F0D1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tB9BBFAAF724D60419381A6208B56623ACCEFE13A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3C_ctorU3Eb__11_0_m2391B0CD022060E26D09949DDF71B6141F763800 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t184C10D5D654A23BAA30FC54F8311002F1CB8146 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2__ctor_m292C1B190DC70DA275CE218F2C67F0844831B6BA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ContinueWith_m0FAF544BE1BCA66A025B6341E9711E9A05FB1656 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1__ctor_mA9FE4E6CA59FD8563FAEB2C8766EA459EECE9346 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskAsyncOperation_1_t68206EA0A5CE2C9F86DEE3AD82475D1338A1BE22 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAsyncOperation_1__ctor_m82F1AD82F4EA091424BB002B45B1B40DD7512E47 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tAD26EC959577C722AC6D4E47E462A25C624A6604 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__ctor_mA84065182F675C4B7DEF18ACE8719884D762906F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tAD26EC959577C722AC6D4E47E462A25C624A6604 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskAsyncOperation_1_t4FA52EBADB38AB54309195B5F580EBB2681C7555 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncOperationBase_1_tDE61D6004076D3AFFF06D1090032680F2691E39A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncOperationBase_1_DidComplete_mBC3E2E20A02122165088D70F6C7B9BF76029A8B4 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t130BF19587914E947C48639394F287609299ACAF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t130BF19587914E947C48639394F287609299ACAF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93_m49E36B01B9275916714436B280553CD140C85156 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_TryGetServiceComponent_TisTComponent_tBAA5FE9669F163078D418D90A722488B21C8DE7F_mCC66EE6E2E3E1D54189C3DEE4652D3B7AE52F7C3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_tD9C5D9B459B225940045E7933443C8B783656397_mC535DC040374F4E5C9752240EC89757EF6460FC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterDependency_TisT_tF7329CEE248A45B379F2D9B9C20F1C509D5AC5BE_mAD6891506B8D0C6E17D74F7C8BB210301F897701 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterOptionalDependency_TisT_tCCF33AF0BF9585F8C54899E9E6F8D47870BAFE99_m70E798148F7356F9EE77CBC9C904A07D27D7AA4F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterProvision_TisT_tAF2C20D6116F2B37117D32E592CC2526F3C66387_mB4B584384E95C9C399D4C4F0099A378683FD9F3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_t1F53D662DD7D083035D429593DB6417C7D00B466_m263AC8BBE177344DE7192B249E8EB1582607BF42 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_RegisterServiceComponent_TisTComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B_mB9D0C705AE4607805AB4E3AADD0D1A95EEBA7693 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343_m14AD4DCAA8DFFB5BBC39FAD1072B05CD971B93F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_TryGetServiceComponent_TisTComponent_t63F4641582EF28E1A29836880D3901F16F1A791D_m180267B27EB2DCF5781CE1A94CE910E10B84F020 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IServiceRegistry_RegisterService_TisT_t09457E30706523654E3521972406984085601E37_mEF7ABFD5435A79939CC1F114F390A1EB9BA78328 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IServiceRegistry_GetService_TisT_t23C885B0A25C50383E3E20487DCB3B87E630ED85_m0EE615A0CE7D0BF2A448AFD7577B848FD3E233DE },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t238DC5B730435DEF358B69AF16052E2640F2DDAC },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t0A42BC7DB4D3931FC95421414239D0563923E6A3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t4EAFE06D169C0A9F5CEA93DA71BFAF9901F32E5E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IServiceRegistry_GetService_TisT_t08D808BB2F60B04DE55233B6337B1690746FFB51_m0F40F5175D1F8248F5FE209F7F649304330F83DA },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t15F996795977B16B82C8628114F76EFE64FAD1DA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t15F996795977B16B82C8628114F76EFE64FAD1DA },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t15F996795977B16B82C8628114F76EFE64FAD1DA_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tED72483001C711656F37583433592491ACCB57AF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tED72483001C711656F37583433592491ACCB57AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CoreRegistry_GetService_TisT_t827C3E9A778E61C957C0C5E502C8505C6A62BBE1_m5FD2294BC041EA704ABC12521F2CB7B99C03AE12 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t99795D35A77A984EF53EF434D83E795A61CCE1C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mDB58D786993B22A0861BD70AC78081EE7D75507F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tCA9E1243F18F77ED9F6844DFB931429E7B8FF235 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m09AC959164ABE7528EE7BFBBD051B035F11EBDBD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_mA54A363FA71629E1F7C634D79CB00B809DB877A7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TDictionary_t1B194603F07A7CCDFCD59B413831AEA0D49DF2FA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_t82E84570784FBFC905C91737EA5980AA7EE33A99 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TDictionary_t1B194603F07A7CCDFCD59B413831AEA0D49DF2FA_IDictionary_2_ContainsKey_mC66E5DDD5C4CE2930367E5AFEBE87EB42B54EB57 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_mA51ED47703CBF7F28BC4500D5B02B8788DE0AAD2 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TDictionary_t1B194603F07A7CCDFCD59B413831AEA0D49DF2FA_IDictionary_2_set_Item_m5D7AF815B463CE07D6445D96ED753F8AD9CE3AB1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t3AB5FDFC395F9C2469B1462108930A452B6090A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m2AEBB94C387C5FEAB75B7EE0AAACA1560AC4FA35 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t11B905B4DED25A3F80738C33CBD410D29EB2E579 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mEAC4C6687A490893B487199C56F126CE8C5F1E32 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_m5D8E85E0DD054DBC9DA4F4119B078FCB6433AAD0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_m29CDE01E4FFC76D0BC74015111BA9696C170FFEB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TDictionary_tB358D3B3F15042E79DDC432F8A8201A49FFC920D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_tCEA790535468C53879CE273E877E5DA28E277248 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TDictionary_tB358D3B3F15042E79DDC432F8A8201A49FFC920D_IDictionary_2_set_Item_m96025EE0937DF9D3508EF12D89CDB8F195F8C51D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_mE27F01695CB801C02F25C7E1B189132940AE00C0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t110DA344FAAB4AE4E0DDF9258BA7459BF9AD4A5C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DictionaryExtensions_ValueEquals_TisTKey_t6168B50FF403D68F4A642BA266D79B47B6B35EF6_TisTValue_tF301E57BFC887414857135C629EAF0480849133F_TisEqualityComparer_1_t110DA344FAAB4AE4E0DDF9258BA7459BF9AD4A5C_m6E40C8C741FD9E4FCC045C420C182608FB92FFAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tF87358FCCE9F38D917DF2290B6FD403C185C12CE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m1E65F784AA1E6EA5E8717C067921DD12179D22AF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t326F945BA68CE770C43AAD27E449A4D4037512C3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m484B2A535767F96B3FDF549FB260C4ACD6B6998D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t37AC52C9EDC96F99212DAA1EA587614A24857934 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m3892B4B1BA8F3CEA18F397FE686F6198A1FFA170 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_m5E014DA8B2272BF56222068F90FDEB421B901D12 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_t38ADE5C52B0E9392323A27659DC57E2C2671149C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_TryGetValue_m38C9A6E3E22FA39565B455CB9F14A7137CD2ABA4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_mCC91CB20BEE31E311100794C7FAEF37E5DC8B81A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComparer_t2DECD95B734FC4A29EF792088E2D3BFF17785C69 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t8BAC7AF45438E0A8DA528E4671AB839136007933 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TComparer_t2DECD95B734FC4A29EF792088E2D3BFF17785C69_IEqualityComparer_1_Equals_m92B612B242D42CD21B6B77B64C28207CCBABB987 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9810D239A31B3FCB8478D86DFCD475F3575412D9 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t9810D239A31B3FCB8478D86DFCD475F3575412D9 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Internal_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Internal_CodeGenModule = 
{
	"Unity.Services.Core.Internal.dll",
	451,
	s_methodPointers,
	49,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	37,
	s_rgctxIndices,
	142,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
